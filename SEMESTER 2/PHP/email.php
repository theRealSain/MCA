<!DOCTYPE html>
<html>
<head>
    <title>Send Emails</title>
</head>
<body>
    <h2>Send Emails</h2>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>">
        To: <input type="email" name="email" placeholder="Enter email id"><br><br>
        Subject: <input type="text" name="subject" placeholder="Enter subject"><br><br>
        Enter message: <br>
        <textarea name="message" cols="30" rows="5" placeholder="Enter message..."></textarea> <br>
        <input type="submit" name="submit" value="Send">
    </form>

    <?php
    if(isset($_POST['submit']))
    {
        $to = $_POST['email'];
        $subject = $_POST['subject'];
        $message = $_POST['message'];
        $headers = "From: sainsaburaj@depaul.edu.in" . "\r\n" . "MIME-Version: 1.0" . "\r\n" . "Content-type: text/html; charset=utf-8";

        echo "<br>Email: $to <br>";
        echo "Subject: $subject <br>";
        echo "Message: $message <br>";

        if(mail($to,$subject,$message))
            echo "Email sent!";
        else
            echo "Email sending failed!";
    }
    ?>

</body>
</html>
