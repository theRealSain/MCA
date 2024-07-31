import java.io.*;
class Palindrome
{
    static void isPalindrome(String str)
    {
        String rev = "";
        boolean ans = false;

        for (int i=str.length()-1; i>=0; i--) 
        {
            rev = rev + str.charAt(i);
        }
        
        if (str.equals(rev))
            System.out.println("String is palindrome.");
        else
            System.out.println("String is not palindrome.");
    }
}

class StringPalindrome 
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader ip = new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(ip);

        System.out.print("Enter a string: ");
	    String str = br.readLine();
        
        str = str.toLowerCase();
        Palindrome p = new Palindrome();
		p.isPalindrome(str);
    }
}
