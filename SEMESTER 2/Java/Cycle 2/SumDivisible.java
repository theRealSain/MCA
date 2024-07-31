import java.io.*;
class CheckNumber
{
	void check(int n)
    {
        int total = 0;
        for(int i=101; i<200; i++)
        {
            if(i % n == 0)
            {
                total = total + i;
            }
        }
        System.out.print("Sum of numbers: " + total);
    }
}

class SumDivisible
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);

        System.out.print("Enter a number: ");
        int n = Integer.parseInt(br.readLine());

        CheckNumber sn = new CheckNumber();
		sn.check(n);
    }
}