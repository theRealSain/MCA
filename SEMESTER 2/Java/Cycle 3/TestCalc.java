import calculator.Calculator;
import java.io.*;

public class TestCalc 
{
    public static void main(String[] args) throws IOException 
    {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Welcome to Calculator!");
        System.out.print("Enter first number: ");
        double num1 = Double.parseDouble(reader.readLine());
        System.out.print("Enter second number: ");
        double num2 = Double.parseDouble(reader.readLine());

        System.out.println("Select an operation:");
        System.out.println("1. Addition (+)");
        System.out.println("2. Subtraction (-)");
        System.out.println("3. Multiplication (*)");
        System.out.println("4. Division (/)");
        System.out.println("5. Exit");

        int choice;
        double result = 0;
        do
        {
            System.out.print("Enter the choice: ");
            choice = Integer.parseInt(reader.readLine());            

            switch (choice) 
            {
                case 1:
                    result = Calculator.add(num1, num2);
                    break;
                case 2:
                    result = Calculator.subtract(num1, num2);
                    break;
                case 3:
                    result = Calculator.multiply(num1, num2);
                    break;
                case 4:
                    result = Calculator.divide(num1, num2);
                    break;
                case 5: 
                    System.out.println("Exiting!");
                    result = 0.0;
                    break;
                default:
                    System.out.println("Invalid choice!");
                    break;
            }
            System.out.println("Result: " + result);
        }
        while(choice != 5);
        
    }
}
