import java.io.*;
class LargestAndSmallest
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);

		int ar[] = new int[20];

		System.out.print("Enter number of items: ");
		int n = Integer.parseInt(br.readLine());

		System.out.println("Enter the items: ");
		for(int i=0; i<n; i++)
		{
			ar[i] = Integer.parseInt(br.readLine());
		}

		int max = ar[0];
		int min = ar[0];
		for(int i=0; i<n; i++)
		{
			if(ar[i] > max )
				max = ar[i];
			
			if(ar[i] < min)
				min = ar[i];
		}
		
		System.out.println("Largest element: " + max);
		System.out.println("Smallest element: " + min);
	}
}
