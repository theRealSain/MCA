import java.io.*;
class ArraySort
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);

		int ar[] = new int[20];
		
		System.out.print("Enter number of items: ");
		int n = Integer.parseInt(br.readLine());

		System.out.println("Enter the numbers: ");
		for(int i=0; i<n; i++)
		{
			ar[i] = Integer.parseInt(br.readLine());
		}
		
		System.out.print("Array before sorting: ");
		for(int i=0; i<n; i++)
		{
			System.out.print(ar[i] + " ");
		}

		System.out.print("\nArray in ascending order: ");

		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(ar[i] > ar[j])
				{
					int temp = ar[i];
					ar[i] = ar[j];
					ar[j] = temp;
				}
			}
		}
		
		for(int i=0; i<n; i++)
		{
			System.out.print(ar[i] + " ");
		}

		System.out.print("\nArray in descending order: ");

		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(ar[i] < ar[j])
				{
					int temp = ar[j];
					ar[j] = ar[i];
					ar[i] = temp;
				}
			}
		}
		
		for(int i=0; i<n; i++)
		{
			System.out.print(ar[i] + " ");
		}
	}
}