<!DOCTYPE html>
<html>
<head>
    <title>Palindrome Number Checker</title>
</head>
<body>
    <h2>Check if Number is Palindrome</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter a number: <input type="text" name="number">
        <input type="submit" name="submit" value="Check">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        $number = $_POST['number'];
        $reversedNumber = strrev($number);

        if ($number == $reversedNumber) 
        {
            echo "<p>Number is a palindrome</p>";
        } 
        else 
        {
            echo "<p>Number is not a palindrome</p>";
        }
    }
    ?>

</body>
</html>
