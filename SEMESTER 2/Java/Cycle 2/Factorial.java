import java.io.*;
class CheckFactorial
{
	int check(int n)
	{
		int fact = 1;
		for(int i=1; i<=n; i++)
		{
			fact = fact * i;
		}
		return fact;
	}
}

class Factorial
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		
		System.out.print("Enter a number: ");
		int n = Integer.parseInt(br.readLine());
		
		CheckFactorial f = new CheckFactorial();
		int value = f.check(n);
		System.out.println("Factorial of " + n + " is " + value);
	}
}