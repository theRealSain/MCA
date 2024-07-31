package cube;
import java.io.*;
public class Cube
{
    public int num, sum;
    public int calculation(int num) throws IOException
    {            
        sum = num * num * num;
        return sum;
    }
}