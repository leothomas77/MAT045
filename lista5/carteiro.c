#include <iostream>
using namespace std;

int binaria(int vetor, int tam, int chave) {
    int li = 0, ls = tam-1;
    while(li<=ls) {
        meio = (li + ls)/2;

    }

    return 0;
}

int main(){
    int N, M, tempo = 0, posicao = 0;
    cin>>N>>M;
    int casas[N];
    int entregas[M];

    for (int i=0; i<N; i++) {
        cin>>casas[i];
    }

    for (int i=0; i<M; i++) {
        cin>>entregas[i];
    }
    
    posicao = 0;
    for (int i=0; i<M; i++) {
        if (entregas[i] > casas[posicao]) {
            for(int j=posicao; j<N; j++) {
                if (entregas[i]==casas[j]) {
                    posicao = j;
                    cout<<"1: entregou casa: "<<casas[j]<<endl;
                    cout<<"1: tempo: "<<tempo<<endl;
                    break;
                } else {
                    tempo++;
                }
            }
        } else {
            for(int j=posicao; j>0; j--) {
                if (entregas[i]==casas[j]) {
                   posicao = j;
                   cout<<"2: entregou casa: "<<casas[j]<<endl;
                   cout<<"2: tempo: "<<tempo<<endl;
                   break;
                } else {
                    tempo++;
                }
            }
        }
   }

    cout<<tempo<<endl;

    return 0;
}
