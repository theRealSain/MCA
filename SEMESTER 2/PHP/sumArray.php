<!DOCTYPE html>
<html>
<head>
    <title>Sum of Array Elements</title>
</head>
<body>
    <h2>Sum of Array Elements</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter numbers (comma-separated): <input type="text" name="numbers">
        <input type="submit" name="submit" value="Calculate">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {        
        $numbersString = $_POST['numbers'];
        $numbersArray = explode(',', $numbersString);
        $sum = 0;

        foreach ($numbersArray as $number) 
        {
            $number = (float)$number;
            $sum += $number;
        }

        echo "<p>Sum of array elements: $sum</p>";
    }
    ?>

</body>
</html>