import java.util.Scanner;

public class numerosAfortunados{
	static boolean is_lucky(int x) {
		int n = 0;
		while (x > 0) {
			int d = x % 10;
			if (d != 4 && d != 7) {
				++n;
				if (n > 1)
					return false;
			}
			x /= 10;
		}
		return true;
	}

	public static void main(String[] args) {
		int N, a, b;
		// metodo para las lecturas
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		for (int i = 0; i < N; i++) {
			a = sc.nextInt();
			b = sc.nextInt();
			int r = 0;
			for (int j = a; j <= b; j++)
				if (is_lucky(j))
					r++;
			System.out.println(r);
		}
	}
}