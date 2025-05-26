#include <bits/stdc++.h>
#define MAXN 100005
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
    int b,e;
    std::string str = toLowerCase(s);
    b = 0;
    e = s.size()-1;
    while(b<e){
        if(isVowel(str[b])){
            while(b<e){
                if(isVowel(str[e])){
                    std::swap(s[b], s[e]);
                    e--;
                    break;
                }
                e--;
            }
        }
        b++;
    }
    return s;
}

char str[3*MAXN];
int main(){

    while(scanf("%[^\n]\n",str)==1){
        std::string cadena = std::string(str);
        cout << reverseVowels(cadena) << endl;
    }
    return 0;
}