
import java.util.Scanner; // Es producto de Scanner que sirve para leer variables

/**
 *
 * @author user
 */
public class ScJava {

    
    public static void main(String[] args) {
        // TODO code application logic here        
        System.out.println("Hello World  java");
        System.out.println("Quispe Torres, Gerar Francis");
        int x,y,c;
        c = 1;
        Scanner dato = new Scanner (System.in);//Es necesario para leer variables Scanner
        System.out.println("Ingrese numero  :");
         x = dato.nextInt();
        for(int k = 1 ; k <= x; k++) {
            c = c * k;
        }
         System.out.println("El valor de c es : " + c);
    }
}
