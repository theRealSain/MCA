<!DOCTYPE html>
<html>
<head>
    <title>New Fruit Details</title>
</head>
<body>
    <h2>New Fruit Details</h2>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
        Name: <input type="text" name="name" required><br><br>
        Color: <input type="text" name="color" required><br><br>
        <input type="submit" name="submit" value="Submit">
    </form>

    <?php
    include 'Fruit.php';

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $name = $_POST['name'];
        $color = $_POST['color'];

        $fruit = new Fruit();

        $fruit->setDetails($name, $color);

        $fruit->displayDetails();
    }
    ?>

</body>
</html>