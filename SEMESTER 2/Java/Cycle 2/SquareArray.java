import java.io.*;
class SquareArray
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		
		int ar[] = new int[20];
		int sq[] = new int[20];
		
		System.out.print("Enter number of items: ");
		int n = Integer.parseInt(br.readLine());
		
		int i;
		System.out.println("Enter the numbers:");
		for(i=0; i<n; i++)
		{
			ar[i] = Integer.parseInt(br.readLine());
			sq[i] = ar[i] * ar[i];
		}
		for(i=0; i<n; i++)
		{
			System.out.print(sq[i] + " ");
		}
	}
}