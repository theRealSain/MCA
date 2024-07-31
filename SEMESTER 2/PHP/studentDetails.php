<!DOCTYPE html>
<html>
<head>
    <title>Student Details</title>
</head>
<body>
    <h2>Student Details</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Name: <input type="text" name="name"><br><br>
        Roll No: <input type="text" name="roll_no"><br><br>
        Marks of Subject 1: <input type="number" name="marks_subject1" required><br><br>
        Marks of Subject 2: <input type="number" name="marks_subject2" required><br><br>
        Marks of Subject 3: <input type="number" name="marks_subject3" required><br><br>
        Marks of Subject 4: <input type="number" name="marks_subject4" required><br><br>
        Marks of Subject 5: <input type="number" name="marks_subject5" required><br><br>
        <input type="submit" name="submit" value="Submit">
    </form>

    <?php
    class Student 
    {
        private $name;
        private $rollNo;
        private $marks = array();

        public function __construct($name, $rollNo, $marks) 
        {
            $this->name = $name;
            $this->rollNo = $rollNo;
            $this->marks = $marks;
        }

        public function calculateTotalMarks() 
        {
            return array_sum($this->marks);
        }

        public function calculatePercentage() 
        {
            $totalMarks = $this->calculateTotalMarks();
            return ($totalMarks / 500) * 100;
        }

        public function calculateGrade() 
        {
            $percentage = $this->calculatePercentage();
            if ($percentage >= 90) 
            {
                return 'A+';
            } 
            elseif ($percentage >= 80) 
            {
                return 'A';
            } 
            elseif ($percentage >= 70) 
            {
                return 'B+';
            } 
            elseif ($percentage >= 60) 
            {
                return 'B';
            } 
            elseif ($percentage >= 50) 
            {
                return 'C+';
            }
            elseif ($percentage >= 40) 
            {
                return 'C';
            }  
            elseif ($percentage >= 30) 
            {
                return 'D+';
            } 
            elseif ($percentage >= 20) 
            {
                return 'D';
            } 
            else 
            {
                return 'F';
            }
        }

        public function displayDetails() 
        {
            echo "<h3>Student Details</h3>";
            echo "Name: " . $this->name . "<br>";
            echo "Roll No: " . $this->rollNo . "<br>";
            echo "Marks:<br>";
            foreach ($this->marks as $index => $mark) 
            {
                echo "Subject " . ($index + 1) . ": " . $mark . "<br>";
            }
            echo "Total Marks: " . $this->calculateTotalMarks() . "<br>";
            echo "Percentage: " . $this->calculatePercentage() . "%<br>";
            echo "Grade: " . $this->calculateGrade() . "<br>";
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $name = $_POST['name'];
        $rollNo = $_POST['roll_no'];
        $marks = array
        (
            $_POST['marks_subject1'],
            $_POST['marks_subject2'],
            $_POST['marks_subject3'],
            $_POST['marks_subject4'],
            $_POST['marks_subject5']
        );

        $student = new Student($name, $rollNo, $marks);

        $student->displayDetails();
    }
    ?>

</body>
</html>