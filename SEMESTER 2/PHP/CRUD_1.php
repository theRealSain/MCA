<?php
$host = 'localhost';
$user = 'root';
$password = 'root';
$db = 'mca_php';

$data = mysqli_connect($host,$user,$password,$db);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <title>CRUD Operations</title>
</head>
<body>
    <h1>CRUD Operations</h1>
    
    <div>
        <h2>Insertion</h2>      
        <form action="" method="POST">
            Enter Name: <input type="text" name="name"> <br><br>
            Enter Roll No: <input type="text" name="roll_no"> <br><br>
            <input type="submit" name="insert_submit">
        </form>

        <?php
        if(isset($_POST['insert_submit']))
        {
            $name = $_POST['name'];
            $roll_no = $_POST['roll_no'];    
            $insert_query = mysqli_query($data, "INSERT INTO student(name, roll_no) values ('$name', '$roll_no');");
        
            if($insert_query)
            {
                echo "<br>Student added to student database!";
            }
            else
            {
                echo "<br>Error in adding data!";
            }
        }
        ?>
    </div> <br>

    <div>
        <h2>Updation</h2>
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
            <input type="submit" name="update_submit" value="Update">
        </form>
        <?php
        if(isset($_POST['update_submit']))
        {
            $roll_no = $_POST['roll_no'];
            $name = $_POST['name'];
        
            $qry = "UPDATE student SET name = '$name' WHERE roll_no = '$roll_no'";
            $info = mysqli_query($data, $qry);
        
            if ($info)
            {
                echo "<br>Record updated successfully!";
                $query = mysqli_query($data, $sql);
            }
            else 
            {
                echo "<br>Error updating record!";
            }
        }
        ?>
    </div> <br>

    <div>
        <h2>Deletion</h2>
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
            <input type="submit" name="delete_submit">
        </form>
        <?php
        if(isset($_POST['delete_submit']))
        {
            $roll_no = $_POST['roll_no'];
        
            $qry = "DELETE FROM student WHERE roll_no = '$roll_no'";
            $info = mysqli_query($data, $qry);
        
            if ($info)
            {
                echo "<br>Record deleted successfully!";
                $query = mysqli_query($data, $sql);
            }
            else 
            {
                echo "<br>Error Deleting record!";
            }
        }
        ?>
    </div> <br>

    <h2>Table contents</h2>
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