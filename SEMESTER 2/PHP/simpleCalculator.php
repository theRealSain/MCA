<!DOCTYPE html>
<html>
<head>
    <title>Simple Calculator</title>
</head>
<body>
    <h2>Simple Calculator</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        <input type="text" name="num1" placeholder="Enter first number">
        <select name="operator">
            <option value="add">+</option>
            <option value="subtract">-</option>
            <option value="multiply">*</option>
            <option value="divide">/</option>
        </select>
        <input type="text" name="num2" placeholder="Enter second number">
        <input type="submit" name="submit" value="Calculate">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $num1 = $_POST['num1'];
        $num2 = $_POST['num2'];
        $operator = $_POST['operator'];

        if (is_numeric($num1) && is_numeric($num2)) 
        {
            switch ($operator) 
            {
                case 'add':
                    $result = $num1 + $num2;
                    break;

                case 'subtract':
                    $result = $num1 - $num2;
                    break;

                case 'multiply':
                    $result = $num1 * $num2;
                    break;

                case 'divide':                    
                    if ($num2 != 0) 
                    {
                        $result = $num1 / $num2;
                    }
                    else
                    {
                        $result = "Cannot divide by zero";
                    }
                    break;

                default:
                    $result = "Invalid operator";
            }

            echo "<p>Result: $result</p>";
        }
        else 
        {
            echo "<p>Please enter valid numeric values for both numbers.</p>";
        }
    }
    ?>
    
</body>
</html>
