include <iostream>

using namespace std;

int count_bits(unsigned long long x){
    int ret = 0;
    
    while(x != 0){
        if(x & 1) ++ret;
        x >>= 1;
    }
    
    return ret;
}

int main(){
    ios::sync_with_stdio(false);
    
    int T;
    
    cin >> T;
    
    unsigned long long total,pos;
    int cant;
    
    for(int tc = 1;tc <= T;++tc){
        cin >> total >> cant >> pos;
        
        cout << "Case " << tc << ":";
        
        if(pos + cant - 1 > total) cout << " It cannot be solved.\n";
        else{
            for(int i = 0;i < cant;++i){
                cout << ' ' << count_bits(pos);
                ++pos;
            }
            
            cout << '\n';
        }
    }
    
    return 0;
}