<!DOCTYPE html>
<html>
<head>
    <title>Fibonacci Series</title>
</head>
<body>
    <h2>Generate Fibonacci Series</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter the limit: <input type="text" name="limit">
        <input type="submit" name="submit" value="Generate">
    </form>
    
    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $limit = $_POST['limit'];

        if (is_numeric($limit) && $limit > 0) 
        {
            $num1 = 0;
            $num2 = 1;

            echo "Fibonacci Series up to $limit terms: $num1, $num2";

            for ($i = 2; $i < $limit; $i++) {
                $num3 = $num1 + $num2;
                echo ", $num3";
                $num1 = $num2;
                $num2 = $num3;
            }
        } 
        else 
        {
            echo "<p>Please enter a valid positive number.</p>";
        }
    }
    ?>

</body>
</html>
