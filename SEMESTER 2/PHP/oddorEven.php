<!DOCTYPE html>
<html>
<head>
    <title>Even Number Checker</title>
</head>
<body>
    <h2>Check if Number is Odd or Even</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter a number: <input type="text" name="number">
        <input type="submit" name="submit" value="Check">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $number = $_POST['number'];
        if ($number % 2 == 0) 
        {
            echo "<p>Number is even</p>";
        } 
        else 
        {
            echo "<p>Number is odd</p>";
        }
    }
    ?>

</body>
</html>
