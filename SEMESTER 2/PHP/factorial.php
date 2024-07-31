<!DOCTYPE html>
<html>
<head>
    <title>Factorial Calculator</title>
</head>
<body>
    <h2>Calculate Factorial</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter a number: <input type="text" name="number">
        <input type="submit" name="submit" value="Calculate">
    </form>

    <?php
    function factorial($n) 
    {
        if ($n === 0) 
        {
            return 1;
        } 
        else 
        {
            return $n * factorial($n - 1);
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $number = $_POST['number'];

        if (ctype_digit($number) && $number >= 0) 
        {            
            $result = factorial($number);
            echo "<p>Factorial of $number is $result</p>";
        } 
        else 
        {
            echo "<p>Please enter a valid non-negative integer.</p>";
        }
    }
    ?>

</body>
</html>
