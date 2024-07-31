import java.io.*;
class ElecBill
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ip = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ip);
		
		System.out.println("Enter the service number: ");
		String serviceNumber = br.readLine();
		
		System.out.println("Enter previous meter Reading: ");
		int prevReading = Integer.parseInt(br.readLine());

		System.out.println("Enter current meter Reading: ");
		int curReading = Integer.parseInt(br.readLine());

		System.out.println("");
		System.out.println("ELECTRICITY BILL");
		System.out.println("----------------");
		System.out.println("Service number: " + serviceNumber);
		
		int units = curReading - prevReading; 
		System.out.println("Units consumed: " + units);
		
		float elecCharge = (float)3.50 * units;
		System.out.println("Electricity charges: " + elecCharge);
	}
}