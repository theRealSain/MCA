import java.util.*;
class Avg
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter first number: ");
		float a = sc.nextFloat();
		System.out.println("Enter second number: ");
		float b = sc.nextFloat();
		System.out.println("Enter third number: ");
		float c = sc.nextFloat();

		float avg = (a + b + c)/3;
		System.out.println("Averege: " + avg);
	}
}