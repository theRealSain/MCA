import java.io.*;
class Largest
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		
		System.out.println("Enter 2 numbers: ");
		int a = Integer.parseInt(br.readLine());
		int b = Integer.parseInt(br.readLine());

		if(a > b)
			System.out.println(a + " is largest");
		else if(b > a)
			System.out.println(b + " is largest");
		else
		{
			System.out.println(a + " = " + b);
		}
	}
}