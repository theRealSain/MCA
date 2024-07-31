package factorial;
import java.io.*;
public class Factorial 
{
    public int factorial(int n)
    {                
        if (n == 0) 
        {
            return 1;
        } 
        else 
        {
            return n * factorial(n - 1);
        }
    }
}
