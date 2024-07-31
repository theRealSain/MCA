import java.io.*;

class CheckArmstrong
{
	int num, n, rem, sum = 0;
	void check(int num)
	{
		n = num;
		while(num > 0)
		{
			rem = num % 10;
			sum = sum + (rem * rem * rem);
			num = num / 10;
		}
		if(sum == n)
		{
			System.out.println(n + " is an Armstrong Number");
		}
		else
		{
			System.out.println(n + " is not an Armstrong Number");
		}
	}
}

class Armstrong
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);

		System.out.print("Enter a number: ");
		int n = Integer.parseInt(br.readLine());

		CheckArmstrong a = new CheckArmstrong();
		a.check(n);
	}
}