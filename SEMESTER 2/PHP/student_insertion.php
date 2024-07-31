<!DOCTYPE html>
<html>
<head>
    <title>Student database - Insertion</title>
</head>
<body>
    <h2>Student database</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        <p><b>Add a Student</b></p>
        Enter Name: <input type="text" name="name"> <br><br>
        Enter Roll No: <input type="text" name="roll_no"> <br><br>
        <input type="submit" name="add" value="Add"> 
    </form>
</body>
</html>

<?php
$host = 'localhost';
$user = 'root';
$password = 'root';
$db = 'mca_php';
$data = mysqli_connect($host,$user,$password,$db);

if(isset($_POST['add']))
{
    $name = $_POST['name'];
    $roll_no = $_POST['roll_no'];

    echo "<h4>Entered Data</h4>";
    echo "Name: $name <br>";
    echo "Roll No: $roll_no<br>";

    $insert_query = mysqli_query($data, "INSERT INTO student(name, roll_no) values ('$name', '$roll_no');");

    if($insert_query)
    {
        echo "<br>Student added to student database!";
    }
    else
    {
        echo "Error in adding data!";
    }
}
?>