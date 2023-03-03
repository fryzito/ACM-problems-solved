// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() 
{
    int N;
    long long NroAntonianos;
    long long sum;
    long long NroDulce;
    cin>>N;
    for (int i=0;i<N;i++)
    {
        
        sum=0;
        cin>>NroAntonianos;
        for(int j=0;j<NroAntonianos;j++)
        {
            
            cin>>NroDulce;
            sum+=NroDulce;
            sum %= NroAntonianos;
        }
        if (sum%NroAntonianos==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}