import java.io.*;
class RangeException extends Exception
{
    public RangeException(String str)
    {
        super(str);
    }
}

class NumberRangeException
{
    public static void main(String args[]) throws IOException
    {
        int n;
        
        InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
        try
        {
            System.out.print("Enter a number: ");
            n = Integer.parseInt(br.readLine());
    
            if(n < 10 || n > 50)
            {
                throw new RangeException("Entered number is not within the range 10 - 50!");
            }
            else
            {
                System.out.println("Square of " + n + " is: " + n * n);
            }
        }

        catch(RangeException e)
        {
            System.out.println(e.getMessage());
        }
    }
}