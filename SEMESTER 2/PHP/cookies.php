<!DOCTYPE html>
<html lang="en">
<head>
    <title>User Login</title>
</head>
<body>

    <?php
    if(isset($_COOKIE['username'])) 
    {
        $username = $_COOKIE['username'];
        echo "<p>Welcome back, $username!</p>";
    } 
    else 
    {
        echo "<p>Welcome, Guest!</p>";
    }

    if(isset($_POST['submit'])) 
    {
        $username = $_POST['username'];
        $password = $_POST['password'];

        setcookie('username', $username, time() + (86400 * 30), "/");
        exit();
    }
    ?>

    <h2>Login</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        <label for="username">Username:</label>
        <input type="text" id="username" name="username" required><br><br>
        <label for="password">Password:</label>
        <input type="password" id="password" name="password" required><br><br>
        <input type="submit" name="submit" value="Login">
    </form>
</body>
</html>
