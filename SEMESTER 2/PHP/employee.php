<html>
<head>
    <title>Employee Details Management</title>
</head>
<body>
    <h1>Employee Details Management</h1>
    <form action="" method="post">
        <h2>Select an Action:</h2>
        <input type="radio" id="read" name="action" value="read" 
        <?php if (isset($_POST['action']) && $_POST['action'] == 'read') echo 'checked'; ?>>
        <label for="read">Read File</label><br>
        <input type="radio" id="append" name="action" value="append" 
        <?php if (isset($_POST['action']) && $_POST['action'] == 'append') echo 'checked'; ?>>
        <label for="append">Append New Employee</label><br>
        <input type="radio" id="write" name="action" value="write" 
        <?php if (isset($_POST['action']) && $_POST['action'] == 'write') echo 'checked'; ?>>
        <label for="write">Write No Employee Details</label><br><br>
        <input type="submit" value="Submit">
    </form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST")
{
    if (isset($_POST['action']))
    { 
        $action = $_POST['action'];
    }
    $filename = 'employees.txt';
    switch ($action)
    {
        case 'read':
        if (file_exists($filename)) 
        {
            $content = file_get_contents($filename);
            echo "<h2>File Content: </h2>
            <pre>$content</pre>";
        } 
        else 
            echo "<h2>File not found!</h2>";
        break;
        
        case 'append':
    ?>
    
    <form action="" method="post">
        <input type="hidden" name="action" value="append-details">
        <h2>Enter Employee Details:</h2>
        Name: <input type="text" id="name" name="name" required><br>
        Age: <input type="text" id="age" name="age" required><br>
        Salary: <input type="text" id="salary" name="salary" required><br><br>
        <input type="submit" value="Submit">
    </form>

<?php
        break;
        
        case 'write':
        $message = "No employee details to it!";
        file_put_contents($filename, $message);
        echo "<h2>File content updated to: \"$message\"</h2>";
        break;

        case 'append-details':
        if (isset($_POST['name']) && isset($_POST['age']) && isset($_POST['salary']))
        {
            $name = htmlspecialchars($_POST['name']);
            $age = htmlspecialchars($_POST['age']);
            $salary = htmlspecialchars($_POST['salary']);
            $newEmployee = "<br>Name: $name, Age: $age, Salary: $salary\n";
            file_put_contents($filename, $newEmployee, FILE_APPEND);
            echo "<h2>New employee details appended to the file!</h2>";
        }
        else 
        {
            echo "<h2>All employee details (name, age, salary) must be provided!</h2>";
        }
        break;
        
        default:
        echo "<h2>Invalid action selected!</h2>";
    }
}
?>
</body>
</html>