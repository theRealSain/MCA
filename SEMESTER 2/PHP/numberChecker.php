<!DOCTYPE html>
<html>
<head>
    <title>Number Checker</title>
</head>
<body>
    <h2>Check if Number is Greater than 30</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter a number: <input type="text" name="number">
        <input type="submit" name="submit" value="Check">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $number = $_POST['number'];
        $result = ($number > 30) ? "Number is greater than 30" : "Number is not greater than 30";
        echo "<p>$result</p>";
    }
    ?>
    
</body>
</html>
