<Html>  
	<head>   
		<title>  
			Registration Page GET
		</title>  
	</head> 
	<body> 
			
	<form method="GET" action="<?php echo $_SERVER['PHP_SELF']; ?>">  

        <center>
        <h2> Registration Form </h2>
        <table border=0 width="60%" cellpadding="5" >
            <tr>
                <td><label> Name </label></td>
                <td><input type="text" name="name"/></td>
            </tr>


            <tr>
                <td><label>Password :  </label></td>
                <td><input type="Password" id="pass" name="pass"></td>
            </tr>

            <tr>
                <td><label>Retype Password :  </label></td>
                <td><input type="Password" id="pass" name="con_pass"></td>
            </tr>

            <tr>
                <td><label>  City :  </label></td>
                <td>
                    <select name="city">  
                        <option selected hidden>City</option>  
                        <option value="Thrissur">Thrissur</option>
                        <option value="Ernakulam">Ernakulam</option>
                        <option value="Trivandrum">Trivandrum</option>
                    </select>
                </td>
            </tr>  

            <tr>
                <td><label> Gender :</label></td>
                <td>
                    <input type="radio" name="gender" value="Male"/> Male
                    <input type="radio" name="gender" value="Female"/> Female
                    <input type="radio" name="gender" value="Other"/> Other
                </td>
            </tr>

            <tr>
                <td><label>Email :  </label></td>
                <td><input type="email" id="email" name="email"/></td>
            </tr>

            <tr>
                <td><input type="submit" name="sub"/></td>
            </tr>

        </table>
  		   	
        <?php
        if(isset($_GET['sub']))
        {
            $name = $_GET['name'];
            $pass = $_GET['pass'];
            $city = $_GET['city'];
            $gender = $_GET['gender'];
            $email = $_GET['email'];

            echo "<h2>Form Data:</h2>";
            echo "Using GET<br>";
            echo "Name: $name <br>";
            echo "City: $city <br>";
            echo "Gender: $gender <br>";
            echo "Email: $email";
        }
        ?>

        </center>
	</form>  
	</body>  
</html>  

