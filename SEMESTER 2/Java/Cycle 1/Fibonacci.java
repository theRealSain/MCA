import java.io.*;
class Fibonacci
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);

		int i, n;
		int t1=0, t2=1;
		int nextTerm = t1 + t2;

		System.out.println("Enter number of terms: ");
		n = Integer.parseInt(br.readLine());

		System.out.print("Fibonacci series: " + t1 + " " + t2 + " ");

		for(i=3; i<=n; i++)
		{
			System.out.print(nextTerm + " ");
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
	}
}