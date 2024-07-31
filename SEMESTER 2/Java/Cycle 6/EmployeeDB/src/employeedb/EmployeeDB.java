package employeedb;

import java.sql.*;
import java.io.*;

public class EmployeeDB {
    public static void main(String args[]) throws IOException {
        String user = "root";
        String pass = "root"; // Use the password you set for the MySQL user

        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection conect = DriverManager.getConnection("jdbc:mysql://127.0.0.1/mca_php", user, pass);
            Statement st = conect.createStatement();
            String sql = "CREATE TABLE IF NOT EXISTS employee2 (empid INT, name VARCHAR(45) NOT NULL, salary INT NOT NULL, designation VARCHAR(55) NOT NULL)";
            st.executeUpdate(sql);
            System.out.println("Table created successfully..");

            while (true) {
                System.out.println("Enter 1.insert 2.delete 3.update 4.select 5.exit");
                int ch = Integer.parseInt(br.readLine());
                switch (ch) {
                    case 1:
                        System.out.println("Enter the id:");
                        int roll = Integer.parseInt(br.readLine());
                        System.out.println("Enter the name:");
                        String name = br.readLine();
                        System.out.println("Enter the salary:");
                        int salary = Integer.parseInt(br.readLine());
                        System.out.println("Enter the designation:");
                        String des = br.readLine();
                        String qry1 = "INSERT INTO employee2 VALUES(?,?,?,?)";
                        PreparedStatement stm1 = conect.prepareStatement(qry1);
                        stm1.setInt(1, roll);
                        stm1.setString(2, name);
                        stm1.setInt(3, salary);
                        stm1.setString(4, des);
                        int count1 = stm1.executeUpdate();
                        System.out.println(count1 + " rows updated");
                        stm1.close();
                        break;
                    case 2:
                        System.out.println("Enter the id to be deleted:");
                        int id = Integer.parseInt(br.readLine());
                        String qry2 = "DELETE FROM employee2 WHERE empid=?";
                        PreparedStatement stm2 = conect.prepareStatement(qry2);
                        stm2.setInt(1, id);
                        int count2 = stm2.executeUpdate();
                        System.out.println(count2 + " rows deleted");
                        stm2.close();
                        break;
                    case 3:
                        System.out.println("Enter the employee id to be updated:");
                        int roll1 = Integer.parseInt(br.readLine());
                        System.out.println("Enter the name to be updated:");
                        String name1 = br.readLine();
                        System.out.println("Enter the salary to be updated:");
                        int salary1 = Integer.parseInt(br.readLine());
                        System.out.println("Enter the designation to be updated:");
                        String des1 = br.readLine();
                        String qry4 = "UPDATE employee2 SET name=?, salary=?, designation=? WHERE empid=?";
                        PreparedStatement stm4 = conect.prepareStatement(qry4);
                        stm4.setString(1, name1);
                        stm4.setInt(2, salary1);
                        stm4.setString(3, des1);
                        stm4.setInt(4, roll1);
                        int count4 = stm4.executeUpdate();
                        System.out.println(count4 + " rows updated");
                        stm4.close();
                        break;
                    case 4:
                        Statement stm3 = conect.createStatement();
                        String qry3 = "SELECT * FROM employee2";
                        ResultSet reset = stm3.executeQuery(qry3);
                        System.out.println("id" + "\t" + "name" + "\t" + "salary" + "\t" + "designation");
                        while (reset.next()) {
                            System.out.println(reset.getInt("empid") + "\t" + reset.getString("name") + "\t" + reset.getInt("salary") + "\t" + reset.getString("designation"));
                        }
                        reset.close();
                        stm3.close();
                        break;
                    case 5:
                        conect.close();
                        System.exit(0);
                }
            }
        } catch (SQLException sqe) {
            System.out.println("SQL Error: " + sqe.getMessage());
        } catch (ClassNotFoundException cnf) {
            System.out.println("Class Not Found: " + cnf.getMessage());
        }
    }
}
