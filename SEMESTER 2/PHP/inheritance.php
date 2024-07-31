<!DOCTYPE html>
<html>
<head>
    <title>Family Details</title>
</head>
<body>
    <h2>Family Details</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        <h3>Parent Details:</h3>
        Parent Name: <input type="text" name="p_name" required><br><br>
        Parent Age: <input type="number" name="p_age" required><br><br>
        <h3>Child Details:</h3>
        Child Name: <input type="text" name="c_name" required><br><br>
        Child Age: <input type="number" name="c_age" required><br><br>
        <input type="submit" name="submit" value="Submit">
    </form>

    <?php
    class ParentClass 
    {
        protected $p_name;
        protected $p_age;

        public function setParentDetails($p_name, $p_age) 
        {
            $this->p_name = $p_name;
            $this->p_age = $p_age;
        }

        public function parentDetails() 
        {
            echo "<h3>Parent Details:</h3>";
            echo "Name: " . $this->p_name . "<br>";
            echo "Age: " . $this->p_age . "<br>";
        }
    }

    class Child extends ParentClass 
    {
        private $c_name;
        private $c_age;

        public function setChildDetails($c_name, $c_age) 
        {
            $this->c_name = $c_name;
            $this->c_age = $c_age;
        }

        public function childDetails() 
        {
            $this->parentDetails();
            echo "<h3>Child Details:</h3>";
            echo "Name: " . $this->c_name . "<br>";
            echo "Age: " . $this->c_age . "<br>";
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $p_name = $_POST['p_name'];
        $p_age = $_POST['p_age'];
        $c_name = $_POST['c_name'];
        $c_age = $_POST['c_age'];

        $parent = new ParentClass();
        $child = new Child();

        $parent->setParentDetails($p_name, $p_age);
        $child->setParentDetails($p_name, $p_age);
        $child->setChildDetails($c_name, $c_age);

        $child->childDetails();
    }
    ?>

</body>
</html>
