import java.util.*;
class Circle
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter radius: ");
		float r = sc.nextFloat();		
		
		double pi = 3.14;
		double area = pi * r * r;
		double circumference = 2 * pi * r;
		System.out.println("Area: " + area);
		System.out.println("Circumference: " + circumference);
	}
}