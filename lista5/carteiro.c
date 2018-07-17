#include <iostream>
using namespace std;

int binaria(int vetor[], int tam, int chave) {
    int li = 0, ls = tam-1, meio, valor;
    while(li<=ls) {
        meio = (li + ls)/2;
        
        
    
        valor = vetor[meio];
        if (chave < valor) {
            ls = meio-1;
        } else if (chave > valor) {
            li = meio+1;
        } else {
            break;
        }
    }
    if (vetor[meio]==chave) {
        return meio;
    } else {     
        return -1;
    }
}

int main(){
    int N, M, tempo = 0;
    cin>>N>>M;
    int casas[N];
    int entregas[M];

    for (int i=0; i<N; i++) {
        cin>>casas[i];
    }

    for (int i=0; i<M; i++) {
        cin>>entregas[i];
    }
 
    int posicao = 0, posicaoAnt = 0, deltaPosicao;
    for (int i=0; i<M; i++) {
        posicao = binaria(casas, N, entregas[i]);
        deltaPosicao = posicao - posicaoAnt;
        if (deltaPosicao < 0) {
            deltaPosicao = -deltaPosicao;
        }
        tempo += deltaPosicao;
        posicaoAnt = posicao;
    }
    cout<<tempo<<endl;
    return 0;
}
