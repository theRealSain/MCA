<!DOCTYPE html>
<html>
<head>
    <title>Sum of Digits</title>
</head>
<body>
    <h2>Find Sum of Digits</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter a number: <input type="text" name="number">
        <input type="submit" name="submit" value="Calculate">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $number = $_POST['number'];
        $sum = 0;

        for ($i = 0; $i < strlen($number); $i++) 
        {
            $sum += $number[$i];
        }
        echo "<p>Sum of digits of $number is $sum</p>";
    }
    ?>

</body>
</html>
