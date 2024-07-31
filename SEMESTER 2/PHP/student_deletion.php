<?php
$host = 'localhost';
$user = 'root';
$password = 'root';
$db = 'mca_php';

$data = mysqli_connect($host,$user,$password,$db);

$sql = "SELECT * FROM student";
$query = mysqli_query($data, $sql);

if ($_SERVER["REQUEST_METHOD"] == "POST") 
{
    $roll_no = $_POST['roll_no'];

    $qry = "DELETE FROM student WHERE roll_no = '$roll_no'";
    $info = mysqli_query($data, $qry);

    if ($info)
    {
        echo "Record deleted successfully!";
        $query = mysqli_query($data, $sql);
    }
    else 
    {
        echo "Error Deleting record!";
    }
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Student database - Deletion</title>
</head>
<body>
    <h2>Student database</h2>
    <p><b>Delete Student data</b></p>
    <table border="1">
        <tr>
            <th>ID</th>
            <th>Name</th>
        </tr>
        
        <?php
        while ($row = mysqli_fetch_assoc($query)) 
        {
            echo "
            <tr>
                <td>" . $row['roll_no'] . "</td>
                <td>" . $row['name'] . "</td>
            </tr>";
        }
        ?>
        
    </table> <br>

    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter the student ID to delete: 
        <select name="roll_no">
            <option selected hidden>Select ID</option>
            <?php
            $sql = "SELECT roll_no FROM student";
            $query = mysqli_query($data, $sql);
            while ($row = mysqli_fetch_assoc($query)) 
            {
                echo "<option value=". $row['roll_no'] . ">" . $row['roll_no'] . "</option>";
            }
            ?>
        </select>
        <br><br>
        <input type="submit">
    </form>

</body>
</html>
