#include<cstdio> 
#include<iostream> 
#include<vector> 
#include<sstream> 
using namespace std; 
string intToString(int x) { 
        stringstream ss; 
        ss << x; 
        return ss.str(); 

} 


int stringToInt(string cadena) { 
        istringstream ss(cadena);  //inicializar ss 
        int resultado; 
        ss >> resultado; 
        return resultado; 

} 


 int sumaDigitos(string numero){ 
            string lista = "0123456789"; 
            int count = 0; 
            for (int i = 0; i < numero.length(); i++) 
            { 
                int valor = -1; 
                    for(int k=0;k<lista.length();k++) 
                    { 
                        valor=valor+1; 
                        if(numero[i]==lista[k]) 
                        { 
                            count=count+valor; 
                        } 
                    } 
            } 
            /* recursivo de la suma de digitos */ 
            if (count < 10) 
                return count; 
            else 
            { 
                string convert = intToString(count); 
                return sumaDigitos(convert); 
            } 

} 


bool ValidarDigito(string a){ 
            bool Flag = true; 
            int i = 0; 
            while ((Flag == true) && (i < a.length())) 
            { 
                char c = a[i]; 
                if ((c == '0') || (c == '1') || (c == '2') || (c =='3') ||(c == '4' )|| (c == '5') || (c == '6') || (c == '7') || (c == '8') ||(c == '9'))
                {
                    Flag = true; 
                } 
                else 
                { 
                    Flag = false; 
                } 
                i++; 
            } 

            return Flag; 


} 


int main(){ 
        cout<<"      "<<endl; 
        cout<<"      RAIZ DIGITAL "<<endl; 
        cout<<" "<<endl; 
        vector<int>lista; 
    //forma de ingresar los numeros... 
        string  numero; 
        do{ 

                cout<<"     "; 
                cin>>numero; 
                if ((ValidarDigito(numero) == true)) 
                { 
                    int s = sumaDigitos(numero); 
                    lista.push_back(s); 
                } 
                else 
                { 
                    cout<<" "<<endl; 
                    cout<<"      por favor digite un  ¡ numero posivito !!...entero largo... "<<endl; 
                    cout<<" "<<endl; 
                } 


            } 
            while (numero != "0"); 
    //mostrarlista(lista); 
        cout<<"       RESULTADOS"<<endl; 
        cout<<" "<<endl; 
        for (int j = 0; j < lista.size(); j++) 
            { 
                                cout<<"     "; 
                cout<<lista[j]<<endl; 
            } 
	}
