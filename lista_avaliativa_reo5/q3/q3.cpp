#include <iostream>
using namespace std;
int menorElemento(int vetor[], int& posInicial, int posFinal,int indiceProcura){
	if(indiceProcura < posFinal){
		if(vetor[posInicial] > vetor[(indiceProcura + 1)]){
			posInicial = (indiceProcura + 1);
			indiceProcura++;
			return menorElemento(vetor, posInicial, posFinal, indiceProcura);
		}else{
			indiceProcura++;
			return menorElemento(vetor, posInicial, posFinal, indiceProcura);
			
		}	
	}else{
		return vetor[posInicial];
	}
}
int main(){
	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	int i;
	for(i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	
	int posInicial = 0;
	int posFinal = (tamanho - 1);
	int indiceProcura = 0;
	cout << menorElemento(vetor, posInicial, posFinal, indiceProcura);
	cout << ' ' << posInicial;

	return 0;
}
