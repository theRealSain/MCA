import java.io.*;
class Five extends Thread
{
    int i;
    public void run()
    {
            for(i=1; i<=10; i++)
        {
            System.out.println("5" + " * " + i + " = " + 5 * i);
        }
        try
        {
            Thread.sleep(1000);
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }
    }
}

class Ten extends Thread
{
    int i;
    public void run()
    {
        for(i=1; i<=10; i++)
        {
            System.out.println("10" + " * " + i + " = " + 5 * i);
        }
        try
        {
            Thread.sleep(1000);
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }
    }
}

class MultiplicationThread
{
    public static void main(String args[])
    {
        Five f = new Five();
        Ten t = new Ten();
        f.start();
        t.start();
    }
}
