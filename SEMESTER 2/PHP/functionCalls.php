<!DOCTYPE html>
<html>
<head>
    <title>Call by Value and Call by Reference</title>
</head>
<body>
    <h2>Call by Value and Call by Reference</h2>
    <h3>Call by Value</h3>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter a number: <input type="text" name="number_by_value">
        <input type="submit" name="submit_by_value" value="Call by Value">
    </form>

    <h3>Call by Reference</h3>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter a number: <input type="text" name="number_by_reference">
        <input type="submit" name="submit_by_reference" value="Call by Reference">
    </form>

    <?php

    function callByValue($param) 
    {
        echo "<p>Inside callByValue function - Before modification: $param</p>";
        $param = $param * 2;
        echo "<p>Inside callByValue function - After modification: $param</p>";
    }

    function callByReference(&$param) 
    {
        echo "<p>Inside callByReference function - Before modification: $param</p>";
        $param = $param * 2;
        echo "<p>Inside callByReference function - After modification: $param</p>";
    }

    if (isset($_POST["submit_by_value"])) 
    {
        $numberByValue = $_POST['number_by_value'];
        echo "<p>Outside function - Before call: $numberByValue</p>";
        callByValue($numberByValue);
        echo "<p>Outside function - After call: $numberByValue</p>";
    }

    if (isset($_POST["submit_by_reference"])) 
    {
        $numberByReference = $_POST['number_by_reference'];
        echo "<p>Outside function - Before call: $numberByReference</p>";
        callByReference($numberByReference);
        echo "<p>Outside function - After call: $numberByReference</p>";
    }
    ?>

</body>
</html>