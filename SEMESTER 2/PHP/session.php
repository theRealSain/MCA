<?php
// Start session
session_start();

// Check if the form is submitted
if(isset($_POST['submit'])) {
    // Retrieve username and email from form
    $username = $_POST['username'];
    $email = $_POST['email'];

    // Set session variables
    $_SESSION['username'] = $username;
    $_SESSION['email'] = $email;
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Login</title>
</head>
<body>
    <h2>Login</h2>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
        <label for="username">Username:</label>
        <input type="text" id="username" name="username" required><br><br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required><br><br>
        <input type="submit" name="submit" value="Login">
    </form>

    <?php
    // Display session variables and session id
    if(isset($_SESSION['username']) && isset($_SESSION['email'])) {
        echo "<h3>Session Details:</h3>";
        echo "Username: " . $_SESSION['username'] . "<br>";
        echo "Email: " . $_SESSION['email'] . "<br>";
        echo "Session ID: " . session_id();
    }
    ?>
</body>
</html>
