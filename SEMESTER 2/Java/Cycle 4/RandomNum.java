import java.util.*;
class Even extends Thread
{
    int n;
    Even(int n)
    {
        this.n = n;
    }

    public void run()
    {
        System.out.println("Square of " + n + " is " + n * n + "\n");
    }
}

class Odd extends Thread
{
    int n;
    Odd(int n)
    {
        this.n = n;
    }
    
    public void run()
    {
        System.out.println("Cube of " + n + " is " + n * n * n + "\n");
    }
}

class Randomnumber extends Thread
{
    int n;
    int t, i;
    
    public void run() 
    {
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter number of times you want to play: ");
        t = ob.nextInt();
        Random r = new Random();
        try
        {
            for(i=0; i<t; i++)
            {
                n = r.nextInt(30);
                System.out.println("Random number: " + n);
                if(n%2 == 0)
                {
                    Even e = new Even(n);
                    e.start();
                }
                else
                {
                    Odd o = new Odd(n);
                    o.start();
                }
                
                Thread.sleep(1000);
            }
        }
        
        catch(InterruptedException e)
        {
        
        }
    }
}

class RandomNum
{
    public static void main(String args[])
    {
        Randomnumber r = new Randomnumber();
        r.start();
    }
}