<!DOCTYPE html>
<html>
<head>
    <title>Array Sorting and Finding Largest/Smallest Element</title>
</head>
<body>
    <h2>Array Sorting and Finding Largest/Smallest Element</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter numbers (comma-separated): <input type="text" name="numbers">
        <input type="submit" name="submit" value="Sort and Find">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $numbersString = $_POST['numbers'];
        $numbersArray = explode(',', $numbersString);

        sort($numbersArray);

        $largest = end($numbersArray);
        $smallest = reset($numbersArray);

        echo "<p>Sorted array: " . implode(', ', $numbersArray) . "</p>";
        echo "<p>Largest element: $largest</p>";
        echo "<p>Smallest element: $smallest</p>";
    }
    ?>
    
</body>
</html>
