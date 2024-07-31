<!DOCTYPE html>
<html>
<head>
    <title>Leap Year Checker</title>
</head>
<body>
    <h2>Leap Year Checker</h2>
    <form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        Enter a year: <input type="text" name="year">
        <input type="submit" name="submit" value="Check">
    </form>

    <?php
    function isLeapYear($year) 
    {
        return (($year % 4 == 0 && $year % 100 != 0) || ($year % 400 == 0));
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        if(isset($_POST['submit']))
        {
            $year = $_POST['year'];
        }
        
        if (is_numeric($year) && $year > 0) 
        {
            if (isLeapYear($year)) 
            {
                echo "<p>$year is a leap year.</p>";
            } 
            else 
            {
                echo "<p>$year is not a leap year.</p>";
            }
        } 
        else 
        {
            echo "<p>Please enter a valid positive year.</p>";
        }
    }
    ?>

</body>
</html>
