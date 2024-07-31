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
    $name = $_POST['name'];

    $qry = "UPDATE student SET name = '$name' WHERE roll_no = '$roll_no'";
    $info = mysqli_query($data, $qry);

    if ($info)
    {
        echo "Record updated successfully!";
        $query = mysqli_query($data, $sql);
    }
    else 
    {
        echo "Error updating record!";
    }
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Student database - Updation</title>
</head>
<body>
    <h2>Student database</h2>
    <p><b>Edit Student data</b></p>
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
        Enter the student ID to edit: 
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
        Enter the new name: 
        <input type="text" name="name"> <br><br>
        <input type="submit" name="submit" value="Update">
    </form>

</body>
</html>
