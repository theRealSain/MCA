<!DOCTYPE html>
<html lang="en">
<head>    
    <title>Form Validation</title>

    <style>
        .red {
            color: red;
        }
    </style>
</head>
<body>
    <h1>Registration form</h1>
    <h4 class="red">*Required fields</h4>
    <form method="post" action="<?php echo $_SERVER["PHP_SELF"]; ?>">
    
    <table>
        <tr>
            <td>Name:</td>
            <td><input type="text" name="name"><span class="red">*</span></td>
        </tr>

        <tr>
            <td>Mobile No:</td>
            <td><input type="text" name="mob"><span class="red">*</span></td>
        </tr>

        <tr>
            <td>Email:</td>
            <td><input type="text" name="email"><span class="red">*</span></td>
        </tr>

        <tr>
            <td>Website:</td>
            <td><input type="text" name="web"></td>
        </tr>

        <tr>
            <td>Gender:</td>
            <td>
                <input type="radio" name="gender" value="male">Male
                <input type="radio" name="gender" value="female">Female
                <input type="radio" name="gender" value="others">Others
                <span class="red">*</span>
            </td>
        </tr>        

        <tr>            
            <td colspan="2">Agree to terms and services<input type="checkbox" name="check"> <span class="red">*</span>Accept terms of services before submission</td>
        </tr>

        <tr>
            <td><input type="submit" name="submit"></td>
        </tr>
    </table>        
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $name = $_POST['name'];
        $mobile = $_POST['mob'];
        $email = $_POST['email'];
        $website = $_POST['web'];
        $gender = isset($_POST['gender']) ? $_POST['gender'] : '';
        $terms = isset($_POST['check']);
    
        $errors = array();
    
        if (empty($name)) 
        {
            $errors['name'] = 'Name is required';
        }
        if (empty($mobile)) 
        {
            $errors['mob'] = 'Mobile number is required';
        }
        if (empty($email)) 
        {
            $errors['email'] = 'Email is required';
        }
        if (empty($gender)) 
        {
            $errors['gender'] = 'Gender is required';
        }
        if (!$terms) 
        {
            $errors['check'] = 'You must accept terms and services';
        }
    
        if (!filter_var($email, FILTER_VALIDATE_EMAIL)) 
        {
            $errors['email'] = 'Invalid email format';
        }
    
        if (!empty($errors)) 
        {
            echo '<br><div class="red">Please correct the following errors:<br>';
            foreach ($errors as $error) 
            {
                echo '- ' . $error . '<br>';
            }
            echo '</div>';
        } 
        else 
        {
            echo '<br><div class="green">Form submitted successfully!</div>';
        }
    }
    ?>

</body>
</html>
