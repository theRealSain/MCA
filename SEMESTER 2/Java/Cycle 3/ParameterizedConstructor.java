import java.io.*;
class Employee
{
    int i;
    String n;
    Employee(int id, String name)
    {
        i = id;
        n = name;
    }

    void displayInfo()
    {        
        System.out.println("\nID: " + i);
        System.out.println("Name: " + n);
    }
}

class ParameterizedConstructor
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader ip = new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(ip);

        System.out.print("Enter ID: ");
	    int i = Integer.parseInt(br.readLine());

        System.out.print("Enter Name: ");
	    String n = br.readLine();

        Employee e = new Employee(i, n);
        e.displayInfo();
    }
}