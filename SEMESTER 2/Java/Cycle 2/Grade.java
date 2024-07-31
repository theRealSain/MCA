import java.io.*;
class CheckGrade
{
	void check(float ar[])
	{
		String grade;
		float total = 0;
		float perc = 0;
                                                                                                                                                                                                                             

		for(int i=0; i<5; i++)
		{			
			total = total + ar[i];									
		}

		perc = (total / 250) * 100;

		if(perc >= 90)
			grade = "A+";
		else if(perc >= 80)
			grade = "A";
		else if(perc >= 70)
			grade = "B+";
		else if(perc >= 60)
			grade = "B";
		else if(perc >= 50)
			grade = "C+";
		else if(perc >= 40)
			grade = "C";
		else if(perc >= 30)
			grade = "D+";
		else if(perc >= 20)
			grade = "D";
		else
			grade = "E";


		System.out.print("\nTotal Mark " + ": " + total + "/250");
		System.out.print("\nPercentage: " + perc + "%");
		System.out.print("\nGrade: " + grade);
		System.out.println();
	}
}

class Grade
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		
		float ar[] = new float[5];
		System.out.print("Enter a 5 marks(out of 50)\n");
		for(int i=0; i<5; i++)
		{
			System.out.print("Enter mark " + (i+1) + ": ");
			ar[i] = Integer.parseInt(br.readLine());
		}

		CheckGrade g = new CheckGrade();
		g.check(ar);
	}
}