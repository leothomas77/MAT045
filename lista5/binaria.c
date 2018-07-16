#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++)
        cin>>v[i];
    int m, chave;
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>chave;
        int li=0, ls=n-1, meio;
        while(li<=ls){
            meio = (li+ls)/2;
            if(chave<v[meio]) ls=meio-1;
            else if(chave>v[meio]) li=meio+1;
            else break;
        }
        if(chave==v[meio])
            cout<<"SIM"<<endl;
        else
            cout<<"NAO"<<endl;
    }
    return 0;
}
