import java.io.*;
class Multiplication
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		
		System.out.print("Enter a number: ");
		int n = Integer.parseInt(br.readLine());
		
		System.out.println("Multiplcation table of " + n);
		for(int i=1; i<=10; i++)
		{
			System.out.println(n + " * " + i + " = " + n*i);
		}
	}
}