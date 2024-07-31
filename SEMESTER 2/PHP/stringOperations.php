<html>
    <head>
        <title>String Operations</title>
    </head>
    <body>
        <h2>String Operations</h2>
        <form action="<?php echo $_SERVER["PHP_SELF"];?>"" method="POST">
            Enter the string:<input type="text" name="text1">
            Enter the substring:<input type="text" name="text2"><br><br>
            <input type="submit" value="String Reverse" name="reverse">
            <input type="submit" value="Substring position" name="position">
            <input type="submit" value="Substring extract" name="extract">
            <input type="submit" value="Replace string" name="replace">
            <input type="submit" value="String repeat" name="repeat">
            <input type="submit" value="String length" name="length">
        </form>
        
        <?php
        if(isset($_POST["reverse"]))
        {
            $a=$_POST["text1"];
            echo strrev($a);
        }
        if(isset($_POST["position"]))
        {
            $a=$_POST["text1"];
            $b=$_POST["text2"];
            echo strpos($a,$b);
        }
        if(isset($_POST["extract"]))
        {
            $a=$_POST["text1"];
            $b=$_POST["text2"];
            echo strstr($a,$b);
        }
        if(isset($_POST["replace"]))
        {
            $a=$_POST["text1"];
            $b=$_POST["text2"];
            echo str_replace($a,$b,$a);
        }
        if(isset($_POST["repeat"]))
        {
            $a=$_POST["text1"];
            $b=$_POST["text2"];
            echo str_repeat($a,3);
        }
        if(isset($_POST["length"]))
        {
            $a=$_POST["text1"];
            echo strlen($a);
        }
    ?>

</body>
</html>