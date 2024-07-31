import java.io.*;
class Days
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		System.out.println("Enter number of days: ");
		int n = Integer.parseInt(br.readLine());

		int monthCount = n / 30;
		int days = n % 30;

		System.out.println("Number of days: " + days);
		System.out.println(monthCount + " month(s) and " + days + " day(s)");
	}
}