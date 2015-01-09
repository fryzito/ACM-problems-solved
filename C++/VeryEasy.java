import java.math.BigInteger;
import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner input = new Scanner(System.in);
	int A, N;
	BigInteger iesimo, number;
	while(input.hasNext()){
	    BigInteger sum = new BigInteger("0");
	    N = input.nextInt();
	    A = input.nextInt();
	    number = BigInteger.valueOf(A);
	    for(int i=1; i<=N; i++) {
		iesimo = BigInteger.valueOf(i);
		iesimo = iesimo.multiply(number.pow(i));
		sum = sum.add(iesimo);
	    }
	    System.out.println(sum);
	}
    }
}
