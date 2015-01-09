import java.util.Arrays;
import java.util.Scanner;
class IsoscelesGabo {
	public static void Main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			if (n == 0)
			break;
			//Almacenar los Puntos
			int pts[][] = new int[n][2];
			for (int i = 0; i < n; i++) {
				pts[i][0] = sc.nextInt();
				pts[i][1] = sc.nextInt();
			}
			//Calcular las Distancias
			double d[][] = new double[n][n];
			for (int i = 0; i < n - 1; i++) {
				for (int j = i + 1; j < n; j++) {
					//Calcular la Distancia entre 2 puntos
					d[i][j] = Math.sqrt(Math.pow(pts[i][0] - pts[j][0],
					2) + Math.pow(pts[i][1] - pts[j][1], 2));
					//Copiar la distancia, porque d(p1,p2) = d(p2,p1)
					d[j][i] = d[i][j];
				}
			}
			int res = 0;
			for (int k = 0; k < n; k++) {
				//Ordenar una fila de la Matriz de Distancias
				Arrays.sort(d[k]);
				//Acumulativo para la serie
				int cumul = 0;
				for (int i = 0; i < n - 1; i++) {
					//Si son igules
					if (d[k][i] == d[k][i + 1]) {
						res++;
						res += cumul;
						//El numero de la serie aumenta
						cumul++;
					} else {
						//La serie vuelve a cero
						cumul = 0;
					}
				}
			}
			System.out.println(res);
		}
	}
}
