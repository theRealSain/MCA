import java.io.*;
class CheckPalindrome
{
	void check(int n)
	{
		int temp = n, rem = 0, rev = 0;
		while(temp != 0)
		{
			rem = temp % 10;
			rev = (rev * 10) + rem;
			temp = temp / 10;
		}
		if(n == rev)
			System.out.print(n + " is Palindrome");
		else
			System.out.print(n + " is not Palindrome");
	}
}

class Palindrome
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		
		System.out.print("Enter a number: ");
		int n = Integer.parseInt(br.readLine());

		CheckPalindrome p = new CheckPalindrome();
		p.check(n);
	}
}