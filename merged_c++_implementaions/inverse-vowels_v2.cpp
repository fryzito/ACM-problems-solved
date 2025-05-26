#include <bits/stdc++.h>
#include <chrono> 
#define MAXN 100005
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl

using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
std::string toLowerCase(const std::string& str) {
    std::string ans="";
    for(int i=0;i<str.size();i++){
        ans += std::tolower(str[i]);
    }
    return ans;
}

string reverseVowels(string s) {
    int b=0;
    int e=0;
    std::string str = toLowerCase(s);
    int mid = str.size()/2;
    // dbg(mid);
    int i=0;
    int j=str.size()-1;
    for(i=0;i<j;i++){
        if(isVowel(str[i])){
            b++;
            e=0;
            j=str.size()-1;
            for(;j>=i;j--){
                if(isVowel(str[j])){
                    e++;
                    if(b==e){
                        // dbg2(i,j);
                        std::swap(s[i], s[j]);
                        break;
                    }
                }

            }
        }
    }

    return s;
}

char str[3*MAXN];
int main(){

    auto start = std::chrono::high_resolution_clock::now();

    while(scanf("%[^\n]\n",str)==1){
        std::string cadena = std::string(str);
        cout << reverseVowels(cadena) << endl;
    }

    auto end = std::chrono::high_resolution_clock::now();
    // Calculamos la duración entre el inicio y el fin en microsegundos
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    // Imprimimos el tiempo en microsegundos
    std::cout << "Tiempo transcurrido: " << duration.count() << " microsegundos." << std::endl;

    return 0;
}