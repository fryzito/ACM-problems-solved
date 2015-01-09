import java.math.BigInteger;
import java.util.*;

public class hola {
    public static void main(String[] args) {
	String str1 = "";String str2 = "";
	Scanner data = new Scanner(System.in);
	BigInteger[] A = new BigInteger[500];
	A[1] = new BigInteger("1"); A[2] = new BigInteger("2");
	A[0] = new BigInteger("0");
	for(int i=3; i<=480; i++) {
	    A[i] = A[i-1].add(A[i-2]);
	}
	while(true) {
	    str1 = data.next();
	    str2 = data.next();
	    if(str1.equals("0") && str2.equals("0"))
		break;
	    BigInteger ini = new BigInteger(str1);
	    BigInteger fin = new BigInteger(str2);
	    int i=480;
	    while((i>0) && (A[i].compareTo(ini)==1|| A[i].compareTo(ini)==0)) i--;
	    i++; int j = 1;
	    //System.out.println("i= "+i);
	    while((j<480) && (A[j].compareTo(fin)==-1|| A[j].compareTo(fin)==0)) j++;
	    j--;
	    //System.out.println("j= "+j);
	    System.out.println(j-i+1);
	}
    }
}
