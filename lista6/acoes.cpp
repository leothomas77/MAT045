#include <iostream>

using namespace std;

int investe(int N, int K, int partes) {
 
    if (N > K) {
        if (N % 2 == 0) {
            return investe(N/2, K, partes) + investe(N/2, K, partes); 
        } else {
            return investe((N+1)/2, K, partes) + investe(N/2, K, partes); 
        }
    } else {

        if (partes==0) partes = 1;
        
        return partes;
    }
    
}

int main()
{
    int N, K, partes;
    
    for(;;) {
        partes = 0;
        cin>>N>>K;
        if (N==0 && K==0) break;
        partes = investe(N, K, partes);
        cout<<partes<<endl;
    }
    
    return 0;
}
