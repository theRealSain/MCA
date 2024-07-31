<html>
<head><title>database</title></head>
<body>
    <form method="post" >
    Enter the Rollno:
    <input type="number" name="id">
    <br><br>
    Enter the name:
    <input type="text" name="name">
    <br><br>
    <input type="submit" name="insert" value="insert">
    <input type="submit" name="update" value="update">
    <input type="submit" name="delete" value="delete">
    <input type="submit" name="select" value="select">
    </form>

<?php   
$servername="localhost";
$username="root";
$password="root";
$dbname="mca_php";
$conn=mysqli_connect($servername,$username,$password,$dbname);

if(!$conn)
{
    die("connection failed".mysqli_connect_error());
}
if(isset($_POST["insert"]))
{
    $rollno=$_POST['id'];
    $name=$_POST['name'];
    $check_sql = "SELECT * FROM emp401 WHERE rollno = $rollno OR name = '$name'";
    $check_result = mysqli_query($conn, $check_sql);
    
    if(mysqli_num_rows($check_result) > 0)
        echo "Error: Rollno or Name already exists.";
    else
    {
        $sql = "INSERT INTO emp401 VALUES($rollno, '$name')";
        if(mysqli_query($conn, $sql))
            echo "Insertion successful";
        else
            echo "Failed: ".mysqli_error($conn);
    }
}

if(isset($_POST["update"]))
{
    $rollno=$_POST['id'];
    $name=$_POST['name'];
    $sql="update emp401 set name='$name' where rollno='$rollno'";
    if(mysqli_query($conn,$sql))
        echo "updation successful";
    else
        echo "failed".mysqli_error($conn);
}

if(isset($_POST["delete"]))
{
    $rollno=$_POST['id'];
    $name=$_POST['name'];
    $sql="delete from emp401 where rollno='$rollno' ";
    if(mysqli_query($conn,$sql))
        echo "deletion successful";
    else
        echo "failed".mysqli_error($conn);
}

if(isset($_POST["select"]))
{
    $rollno=$_POST['id'];
    $name=$_POST['name'];
    $sql="select * from emp401 where rollno=$rollno";
    if($result=mysqli_query($conn,$sql))
    {
        while($row=mysqli_fetch_array($result))
        {
        echo " Roll no: ".$row['rollno'] . "<br>";
        echo " Name:  ".$row['name'];
        echo"<br>";
        }
    }
}

mysqli_close($conn);
?>
</body>
</html>
