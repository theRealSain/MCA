import java.io.*;
import factorial.Factorial;
public class TestFactorial
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader ip = new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(ip);

        System.out.print("Enter a number: ");
        int n = Integer.parseInt(br.readLine());

        Factorial n1 = new Factorial();
        int f = n1.factorial(n);
        System.out.println("Factorial: " + f);
    }
}