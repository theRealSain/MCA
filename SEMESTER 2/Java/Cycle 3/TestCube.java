import java.io.*;
import cube.Cube;
public class TestCube
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader ip = new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(ip);

        Cube n1 = new Cube();

        System.out.print("Enter a number: ");
        int num = Integer.parseInt(br.readLine());
        
        int t1 = n1.calculation(num);
        System.out.println("Cube: " + t1);
    }
}