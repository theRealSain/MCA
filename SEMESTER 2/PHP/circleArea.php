<!DOCTYPE html>
<html>
<head>
    <title>Area of a Circle</title>
</head>
<body>
    <h2>Calculate Area of a Circle</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter the radius: <input type="text" name="radius">
        <input type="submit" name="submit" value="Calculate">
    </form>

    <?php
    define("PI", 3.14);

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $radius = $_POST['radius'];

        if (is_numeric($radius) && $radius >= 0) 
        {
            $area = PI * $radius * $radius;
            echo "<p>The area of the circle with radius $radius is $area</p>";
        } 
        else 
        {
            echo "<p>Please enter a valid non-negative number for the radius.</p>";
        }
    }
    ?>

</body>
</html>
