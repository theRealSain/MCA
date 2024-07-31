<!DOCTYPE html>
<html>
<head>
    <title>Bubble Sort</title>
</head>
<body>
    <h2>Bubble Sort</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter numbers (comma-separated): <input type="text" name="numbers">
        <input type="submit" name="submit" value="Sort">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $numbersString = $_POST['numbers'];
        $numbersArray = explode(',', $numbersString);

        $n = count($numbersArray);
        for ($i = 0; $i < $n - 1; $i++) 
        {
            for ($j = 0; $j < $n - $i - 1; $j++) 
            {
                if ($numbersArray[$j] > $numbersArray[$j + 1]) 
                {
                    $temp = $numbersArray[$j];
                    $numbersArray[$j] = $numbersArray[$j + 1];
                    $numbersArray[$j + 1] = $temp;
                }
            }
        }

        echo "<p>Sorted array: " . implode(', ', $numbersArray) . "</p>";
    }
    ?>

</body>
</html>