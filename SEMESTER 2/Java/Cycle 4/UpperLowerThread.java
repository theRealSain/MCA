import java.io.*;
class Upper implements Runnable
{
    char ch;

    public void run()
    {
        for(ch='A'; ch<='Z'; ch++)
        {
            System.out.println(ch);
            try
            {
                Thread.sleep(1000);
            }
            
            catch(InterruptedException e)
            {
            
            }
        }
    }
}

class Lower implements Runnable
{
    char ch;
    
    public void run()
    {
        for(ch='a'; ch<='z'; ch++)
        {
            System.out.println(ch);
            try
            {
                Thread.sleep(500);
            }
            
            catch(InterruptedException e)
            {
            
            }
        }
    }
}

class UpperLowerThread
{
    public static void main(String args[])
    {
        Upper u = new Upper();
        Lower l = new Lower();
        Thread t1 = new Thread(u);
        Thread t2 = new Thread(l);
        t1.start();
        t2.start();
    }
}