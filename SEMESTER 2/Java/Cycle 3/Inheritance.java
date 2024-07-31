class Grandparent
{
    String gname;
    int gage;

    public Grandparent(String gname, int gage)
    {
        this.gname = gname;
        this.gage = gage;
    }

    public void grandparentDetails()
    {
        System.out.println("\nGrandparent: ");
        System.out.println("Name: " + gname);
        System.out.println("Age: " + gage);
    }
}

class Parent extends Grandparent
{
    String pname;
    int page;

    public Parent(String gname, int gage, String pname, int page)
    {
        super(gname, gage);
        this.pname = pname;
        this.page = page;
    }

    public void parentDetails()
    {
        super.grandparentDetails();
        System.out.println("\nParent: ");
        System.out.println("Name: " + pname);
        System.out.println("Age: " + page);
    }
}

class Child extends Parent 
{
    String cname;
    int cage;
    
    public Child(String gname, int gage, String pname, int page, String cname, int cage) 
    {
        super(gname, gage, pname, page);
        this.cname = cname;
        this.cage = cage;
    }
    
    public void childDetails() 
    {
        super.parentDetails();
        System.out.println("\nChild: ");
        System.out.println("Name: " + cname);
        System.out.println("Age: " + cage);
    }
}

public class Inheritance
{
    public static void main(String[] args) 
    {
        Child child = new Child("Grandpa", 70, "Dad", 40, "Child", 10);
        child.childDetails();
    }
}