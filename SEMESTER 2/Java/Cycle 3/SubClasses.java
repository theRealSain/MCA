class Parent 
{
    int i;

    public void printNum() 
    {
        System.out.println("Value of i: " + i);
    }
}

class Child extends Parent 
{
    int j;

    public void printNum() 
    {
        super.printNum();
        System.out.println("Value of j: " + j);
    }
}

public class SubClasses 
{
    public static void main(String[] args) 
    {
        Child obj = new Child();
        obj.i = 10;
        obj.j = 20;

        obj.printNum();
    }
}
