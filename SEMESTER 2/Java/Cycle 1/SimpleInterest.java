import java.util.*;
class SimpleInterest
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter principle amount: ");
		float p = sc.nextFloat();
		System.out.println("Enter number of years: ");
		float n = sc.nextFloat();
		System.out.println("Enter rate of interest: ");
		float r = sc.nextFloat();

		float si = (p * n * r) / 100;
		System.out.println("Simple Interest: " + si);
	}
}