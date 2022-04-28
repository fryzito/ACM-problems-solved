import java.util.Scanner;
class Main 
{    
    public static void main(String[] args)
    {
        String s;
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext())
	    {
		s = sc.next();
		if(s.matches("da+dd?(i|y)"))
		    System.out.println("She called me!!!");
		else
		    System.out.println("Cooing");
	    }
    }
}
