import java.io.*;
class Area
{
    float l, b;
    Area(float len, float brd)
    {
        l = len;
        b = brd;
    }

    float returnArea()
    {
        float area = l * b;
        return area;        
    }
}

class AreaRectangle
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader ip = new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(ip);

        System.out.print("Enter Length: ");
	    float l = Float.parseFloat(br.readLine());

        System.out.print("Enter Breadth: ");
	    float b = Float.parseFloat(br.readLine());

        Area a = new Area(l, b);
        float area = a.returnArea();
        System.out.println("\nArea of rectangle with length " + l + " and breadth " + b + " is " + area);
    }
}