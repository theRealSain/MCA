<!DOCTYPE html>
<html>
<head>
    <title>Month Finder</title>
</head>
<body>
    <h2>Find Month Name</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        Enter month number (1-12): <input type="text" name="month_number">
        <input type="submit" name="submit" value="Find">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        $monthNumber = $_POST['month_number'];
        $monthName = "";

        switch ($monthNumber)
        {
            case 1:
                $monthName = "January";
                break;
            case 2:
                $monthName = "February";
                break;
            case 3:
                $monthName = "March";
                break;
            case 4:
                $monthName = "April";
                break;
            case 5:
                $monthName = "May";
                break;
            case 6:
                $monthName = "June";
                break;
            case 7:
                $monthName = "July";
                break;
            case 8:
                $monthName = "August";
                break;
            case 9:
                $monthName = "September";
                break;
            case 10:
                $monthName = "October";
                break;
            case 11:
                $monthName = "November";
                break;
            case 12:
                $monthName = "December";
                break;
            default:
                $monthName = "Invalid month number";
        }

        echo "<p>Month corresponding to $monthNumber is $monthName</p>";
    }
    ?>

</body>
</html>