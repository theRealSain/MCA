<?php
if(isset($_FILES['fileToUpload']))
{
    $errors = array();
    $file_name = $_FILES['fileToUpload']['name'];
    $file_size = $_FILES['fileToUpload']['size'];
    $file_tmp = $_FILES['fileToUpload']['tmp_name'];
    $file_type = $_FILES['fileToUpload']['type'];

    $file_ext_parts = explode('.', $_FILES['fileToUpload']['name']);
    $file_ext = strtolower(end($file_ext_parts));

    $extentions = array("jpeg", "jpg", "png", "pdf", "doc", "docx", "txt");
    if(in_array($file_ext, $extentions) == false)
    {
        $errors[] = "Extention not allowed! Please try again!";
    }

    if($file_size > 10485760)
    {
        $errors[] = "File size must be less than 10 MB! Please try again!";
    }

    if(empty($errors) == true)
    {
        if(move_uploaded_file($file_tmp, "uploads/" . $file_name))
        {
            echo "Success!<br><br>";

            $file_url = "uploads/" . $file_name;

            if(in_array($file_ext, array("jpeg", "jpg", "png")))
            {
                echo "<img src='$file_url' alt='$file_name' style='max-width: 30%; height: auto;'><br>";
            }
            elseif(in_array($file_ext, array("pdf")))
            {
                echo "<embed src='$file_url' type='application/pdf' width='30%' height='600px'>";
            }
            elseif(in_array($file_ext, array("doc", "docx")))            
            {
                echo "<a href='$file_url' target='_blank'>View Document</a><br>";
            }
            elseif(in_array($file_ext, array("txt")))            
            {
                echo "<a href='$file_url' target='_blank'>View Text file</a><br>";
            }
            echo "<br><br><a href='$file_url' download>Download file</a>";
        }
        else
        {
            echo "Failed to move the uploaded file!";
        }
    }
    else
    {
        foreach($errors as $error)
        {
            echo $error . "<br>";
        }
    }
}
?>