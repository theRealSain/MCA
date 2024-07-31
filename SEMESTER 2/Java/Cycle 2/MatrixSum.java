import java.io.*;

class Matrix
{
	InputStreamReader ip = new InputStreamReader(System.in);
	BufferedReader br = new BufferedReader(ip);

	void matrix() throws IOException
	{
		System.out.print("Enter number of rows: ");
		int r = Integer.parseInt(br.readLine());

		System.out.print("Enter number of columns: ");
		int c = Integer.parseInt(br.readLine());
		
		int ar1[][] = new int[r][c];
		int ar2[][] = new int[r][c];
		int ar3[][] = new int[r][c];
		
		System.out.println("Enter matrix 1 elements: ");
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				System.out.print("[" + i + "]" + "[" + j + "]: ");
				ar1[i][j] = Integer.parseInt(br.readLine());
			}
		}

		System.out.println("Enter matrix 2 elements: ");
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				System.out.print("[" + i + "]" + "[" + j + "]: ");
				ar2[i][j] = Integer.parseInt(br.readLine());
			}
		}

		System.out.println("\nMatrix 1 elements: ");
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				System.out.print(ar1[i][j] + " ");
			}
			System.out.println();
		}

		System.out.println("\nMatrix 2 elements: ");
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				System.out.print(ar2[i][j] + " ");
			}
			System.out.println();
		}

		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				ar3[i][j] = ar1[i][j] + ar2[i][j];
			}
		}

		System.out.println("\nSum of Matrices: ");
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				System.out.print(ar3[i][j] + " ");
			}
			System.out.println();
		}
	}
}

class MatrixSum
{
	public static void main(String args[]) throws IOException
	{	
		Matrix m = new Matrix();
		m.matrix();
	}
}