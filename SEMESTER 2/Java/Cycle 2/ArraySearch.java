import java.io.*;
class ArraySearch
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
		
		System.out.print("Enter the element to search: ");
		int search = Integer.parseInt(br.readLine());

		int index = -1;
		for(int i=0; i<n; i++)
		{
			if(search == ar[i])
			{
				index = i;
			}
		}
		
		if(index == -1)
			System.out.print("Element not found!");
		else
			System.out.print("Element found at " + index);
	}
}