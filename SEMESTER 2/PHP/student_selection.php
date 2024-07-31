
<?php
$host = 'localhost';
$user = 'root';
$password = 'root';
$db = 'mca_php';

$data = mysqli_connect($host,$user,$password,$db);
?>

<!DOCTYPE html>
<html>
<head>
    <title>Student database - Selection</title>
</head>
<body>
    <h2>Student database</h2>
    <p><b>Display Student data</b></p>
    <table border=1>
        <tr>
            <th>Name</th>
            <th>Roll No</th>
        </tr>
        <?php
        $sql = "SELECT * FROM student";
        $result = $data->query($sql);
        while($row = $result->fetch_assoc())     
        {
        ?>
        <tr>
            <td><?php echo $row['name']; ?></td>
            <td><?php echo $row['roll_no']; ?></td>
        </tr>
        <?php
        }
        ?>
    </table>
</body>
</html>