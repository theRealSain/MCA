abstract class Bank 
{
    abstract int getBalance();
}

class BankA extends Bank 
{
    private int balance = 100;

    int getBalance() 
    {
        return balance;
    }
}

class BankB extends Bank 
{
    private int balance = 150;

    int getBalance() 
    {
        return balance;
    }
}

class BankC extends Bank 
{
    private int balance = 200;

    int getBalance() 
    {
        return balance;
    }
}

public class Banking 
{
    public static void main(String[] args) 
    {
        BankA bankA = new BankA();
        BankB bankB = new BankB();
        BankC bankC = new BankC();

        System.out.println("Balance in Bank A: $" + bankA.getBalance());
        System.out.println("Balance in Bank B: $" + bankB.getBalance());
        System.out.println("Balance in Bank C: $" + bankC.getBalance());
    }
}
