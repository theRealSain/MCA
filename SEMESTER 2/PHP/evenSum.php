<!DOCTYPE html>
<html>
<head>
    <title>Sum of Even numbers in an Array</title>
</head>
<body>
    <h2>Sum of Even numbers in an Array</h2>
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

        echo "<br>Entered data: $numbersString";

        foreach ($numbersArray as $number) 
        {
            if($number % 2 == 0)
            {
                $number = (float)$number;
                $sum += $number;
            }
        }
        echo "<p>Sum of array elements: $sum</p>";
    }
    ?>

</body>
</html>