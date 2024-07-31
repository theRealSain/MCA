import java.io.*;
class Discount
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		
		System.out.println("Enter Marked price: ");
		float price = Float.parseFloat(br.readLine());
		System.out.println("Enter rate of discount: ");
		float discount = Float.parseFloat(br.readLine());

		System.out.println("\nMarked price: " + price);
		System.out.println("Discount rate: " + discount);

		float discountPrice = price - (price * (discount/100));

		System.out.println("Amount after discount: " + discountPrice);
	}
}