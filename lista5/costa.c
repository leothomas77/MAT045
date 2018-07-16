#include <iostream>
using namespace std;

int main() {
    unsigned int M, N, cont = 0, contTerra = 0;
    
    cin>>M>>N;

    char mapa[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin>>mapa[i][j];
            if (mapa[i][j]== '#') {
                cont++;
            }
        }
    }
    
    for (int i = 1; i < M-1; i++) {
        for (int j = 1; j < N-1; j++) {
            if (mapa[i][j] == '#' && 
                mapa[i-1][j] == '#' && 
                mapa[i+1][j] == '#' && 
                mapa[i][j-1] == '#' && 
                mapa[i][j+1] == '#') {
               contTerra++;
            }
        }
    }

    cout<<cont-contTerra<<endl;

    return 0;
}
