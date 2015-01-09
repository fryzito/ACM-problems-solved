// En el código usamos la clase vector (#include <vector>) para crear los vectores,
// obviamente funciona igual de bien si se utilizan los arrays tipo C: TIPO V[]
template <class T>
void fusiona(vector<T>& v, int ini, int med, int fin) {
    vector<T> aux(fin - ini + 1);
    int i = ini; // Índice de la parte izquierda
    int j = med + 1; // Índice de la parte derecha
    int k = 0; // Índice del vector aux
 
 
    /* Mientras ninguno de los indices llegue a su fin vamos realizando
       comparaciones. El elemento más pequeño se copia al vector aux */
    while (i <= med && j <= fin) {
        if (v[i] < v[j]) {
            aux[k] = v[i];
            i++;
        }
        else {
            aux[k] = v[j];
            j++;
        }
        k++;
    }
 
    /* Uno de los dos sub-vectores ya ha sido copiado del todo, simplemente
       debemos copiar todo el sub-vector que nos falte */
    while (i <= med) {
        aux[k] = v[i];
        i++;
        k++;
    }
 
    while (j <= fin) {
        aux[k] = v[j];
        j++;
        k++;
    }
 
    /* Copiamos los elementos ordenados de aux al vector original v */
    for (int n = 0; n < aux.size(); ++n) v[ini + n] = aux[n];
}
 
template <class T>
void merge_sort(vector<T>& v, int ini, int fin) {
    /* Si ini = fin el sub-vector es de un solo elemento y, por lo tanto
       ya está ordenado por definición */
    if (ini < fin) {
/*Considerar que el valor de med siempre es redondeado hacia abajo.*/
        int med = (ini + fin)/2;
        merge_sort(v, ini, med);
        merge_sort(v, med + 1, fin);
        fusiona(v, ini, med, fin);
    }
}