<!DOCTYPE html>
<html>
<head>
    <title>Student Details</title>
</head>
<body>
    <h2>Student Details</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Name: <input type="text" name="name" required><br><br>
        Roll No: <input type="text" name="rollno" required><br><br>
        Age: <input type="number" name="age" required><br><br>
        Attendance: <input type="number" name="attendance" required><br><br>
        Total Marks: <input type="number" name="totalmarks" required><br><br>
        <input type="submit" name="submit" value="Submit">
    </form>

    <?php
    class Student 
    {
        protected $name;
        protected $rollno;
        protected $age;

        public function setPersonalDetails($name, $rollno, $age) 
        {
            $this->name = $name;
            $this->rollno = $rollno;
            $this->age = $age;
        }

        public function displayPersonal() 
        {
            echo "<h3>Personal Details:</h3>";
            echo "Name: " . $this->name . "<br>";
            echo "Roll No: " . $this->rollno . "<br>";
            echo "Age: " . $this->age . "<br>";
        }
    }

    class Academic extends Student 
    {
        protected $attendance;
        protected $totalmarks;

        public function setAcademicDetails($attendance, $totalmarks) 
        {
            $this->attendance = $attendance;
            $this->totalmarks = $totalmarks;
        }

        public function displayAcademic() 
        {
            echo "<h3>Academic Details:</h3>";
            echo "Attendance: " . $this->attendance . "<br>";
            echo "Total Marks: " . $this->totalmarks . "<br>";
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $name = $_POST['name'];
        $rollno = $_POST['rollno'];
        $age = $_POST['age'];
        $attendance = $_POST['attendance'];
        $totalmarks = $_POST['totalmarks'];

        $student = new Academic();

        $student->setPersonalDetails($name, $rollno, $age);
        $student->setAcademicDetails($attendance, $totalmarks);

        $student->displayPersonal();
        $student->displayAcademic();
    }
    ?>

</body>
</html>
