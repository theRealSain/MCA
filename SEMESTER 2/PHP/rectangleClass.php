<!DOCTYPE html>
<html>
<head>
    <title>Rectangle Operations</title>
</head>
<body>
    <h2>Rectangle Operations</h2>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
        Length: <input type="number" name="length" required><br><br>
        Width: <input type="number" name="width" required><br><br>
        <input type="submit" name="submit" value="Calculate">
    </form>

    <?php
    class Rectangle 
    {
        private $length;
        private $width;

        public function setDimensions($length, $width) 
        {
            $this->length = $length;
            $this->width = $width;
        }

        public function calculateArea() 
        {
            return $this->length * $this->width;
        }

        public function calculatePerimeter() 
        {
            return 2 * ($this->length + $this->width);
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $length = $_POST['length'];
        $width = $_POST['width'];

        $rectangle = new Rectangle();
        $rectangle->setDimensions($length, $width);

        echo "<br>Area: " . $rectangle->calculateArea() . "<br>";
        echo "Perimeter: " . $rectangle->calculatePerimeter() . "<br>";
    }
    ?>
    
</body>
</html>
