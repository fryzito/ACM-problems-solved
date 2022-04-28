import java.math.BigInteger;
import java.util.*;

public class hola {
    public static void main(String[] args) {
	Scanner input = new Scanner(System.in);
	String str;
	BigInteger number = new BigInteger("0");
	
	while(input.hasNext()){
	    str = input.nextLine();
	    System.out.println("str = "+str);
	    BigInteger number2 = new BigInteger(str);
	    number = number.add(number2);
	    System.out.println("number = "+number);
	}
	
	System.out.println("");
	System.out.println("final number "+number);
    }
}
