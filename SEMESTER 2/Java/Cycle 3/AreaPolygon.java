import java.io.*;
class Polygon
{
    float square(float side)
    {
        return side * side;
    }

    float rectangle(float len, float brd)
    {
        return len * brd;
    }
}

class AreaPolygon
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader ip = new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(ip);

        System.out.print("Enter length of a side(square): ");
	    float side = Float.parseFloat(br.readLine());
        Polygon p = new Polygon();
        float areaSquare = p.square(side);
        System.out.print("Area of a square with a side " + side + ": " + areaSquare);

        System.out.print("\n\nEnter length: ");
	    float len = Float.parseFloat(br.readLine());
        System.out.print("Enter breadth: ");
	    float brd = Float.parseFloat(br.readLine());
        float areaRectangle = p.rectangle(len, brd);
        System.out.print("Area of a rectangle with length " + len + " and breadth " + brd + ": " + areaRectangle);
    }
}
