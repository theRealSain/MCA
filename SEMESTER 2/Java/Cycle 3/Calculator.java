package calculator;
import java.io.*;
public class Calculator 
{
    public static double add(double num1, double num2) 
    {
        return num1 + num2;
    }
    
    public static double subtract(double num1, double num2) 
    {
        return num1 - num2;
    }
    
    public static double multiply(double num1, double num2) 
    {
        return num1 * num2;
    }
    
    public static double divide(double num1, double num2) 
    {
        if (num2 == 0) 
        {
            System.out.println("Error: Division by zero!");
            return Double.NaN;
        }
        return num1 / num2;
    }
    
    public static void main(String args[]) throws IOException 
    {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Welcome to Calculator!");
        System.out.println("Enter two numbers:");
        double num1 = Double.parseDouble(reader.readLine());
        double num2 = Double.parseDouble(reader.readLine());

        System.out.println("Select an operation:");
        System.out.println("1. Addition (+)");
        System.out.println("2. Subtraction (-)");
        System.out.println("3. Multiplication (*)");
        System.out.println("4. Division (/)");
    }
}
