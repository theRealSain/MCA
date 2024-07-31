<!DOCTYPE html>
<html>
<head>
    <title>Armstrong Number Checker</title>
</head>
<body>
    <h2>Check if Number is Armstrong</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter a number: <input type="text" name="number">
        <input type="submit" name="submit" value="Check">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $number = $_POST['number'];

        $numDigits = strlen($number);
        $sum = 0;

        for ($i = 0; $i < $numDigits; $i++) 
        {
            $sum += pow($number[$i], $numDigits);
        }

        if ($sum == $number) 
        {
            echo "<p>$number is an Armstrong number.</p>";
        } 
        else 
        {
            echo "<p>$number is not an Armstrong number.</p>";
        }
    }
    ?>

</body>
</html>
