import java.lang.reflect.Array;
import java.math.BigInteger;
import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner input = new Scanner(System.in);
	
	BigInteger[] A = new BigInteger[1002];
	Arrays.fill(A, BigInteger.ZERO);
	A[0] = new BigInteger("0");
	A[1] = new BigInteger("2");
	A[2] = new BigInteger("5");
	A[3] = new BigInteger("13");
	
	for(int i=4; i<1001; i++) {
	    A[i] = A[i].add(A[i-1]);
	    A[i] = A[i].add(A[i-2]);
	    A[i] = A[i].add(A[i-3]);
	    A[i] = A[i].add(A[i-1]);
	}
	int indice;
	while(input.hasNextInt()) {
	    indice = input.nextInt();
	    System.out.println(A[indice]);
	}
    }
}