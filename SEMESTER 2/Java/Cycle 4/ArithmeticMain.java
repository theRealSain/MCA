import java.io.*;
class ArgumentException extends Exception
{

}

class NumberException extends Exception
{

}

class ArithmeticMain
{
    public static void main(String args[])
    {
        int n1, n2, sum;
        try
        {
            if(args.length == 2)
            {
                n1 = Integer.parseInt(args[0]);
                n2 = Integer.parseInt(args[1]);
                
                float result = n1 / n2;                

                if(n2 == 0 || n1 < n2)
                {
                    throw new NumberException();
                }
                else
                {
                    System.out.println("Result: " + result);                    
                }                
            }
            else
            {
                throw new ArgumentException();
            }
        }
        catch(NumberException e)
        {
            System.out.println("Enter valid input number!");
        }
        catch (ArgumentException e)
        {
            System.out.println("Enter input through command line!");
        }
    }
}