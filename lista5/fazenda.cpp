#include <iostream>
#define MAX 10
using namespace std;

int main() {
    unsigned int N, X, Y, L, C, cont = 0;
    
    char areaTotal[MAX][MAX];

    for(unsigned int i=0; i<MAX; i++)
        for(unsigned int j=0; j<MAX; j++)
            areaTotal[i][j]='.';

    for(;;) {
        cin>>N;
        if(N==0) break;

        for(int i=0; i<N; i++) {
            cin>>X>>Y>>L>>C;
        }

        for(int i=X; i<=L && i<MAX; i++) {
            for(int j=Y; j<=C && j<MAX; j++) {
               areaTotal[i][j]='#';
            }
        }
        
        for(unsigned int i=0; i<MAX; i++) {
            for(unsigned int j=0; j<MAX; j++) {
                if (areaTotal[i][j]=='#') {
                    cont++;
                }
            }
        }
 
        for(unsigned int i=0; i<MAX; i++) {
            for(unsigned int j=0; j<MAX; j++) {
                cout<<areaTotal[i][j];
            }
            cout<<endl;
        }
        
        cout<<cont<<endl;               
           
    }


    return 0;
}
