#include <iostream>
using namespace std;
int buscaBinariaRecursiva(int vetor[], int posInicial, int posFinal, int numeroProcurado){
	int media = (posInicial + posFinal) / 2;
	if(posInicial < posFinal){
		if(vetor[media] > numeroProcurado){
			posFinal = media - 1;
			return buscaBinariaRecursiva(vetor, posInicial, posFinal, numeroProcurado);
		}else if(vetor[media] < numeroProcurado){
			posInicial = media + 1;
			return buscaBinariaRecursiva(vetor, posInicial, posFinal, numeroProcurado);
		}else{
			return vetor[media];
		}
		
	}else{
		return -1;
	}
}
int main(){
	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	
	int i, j;
	int aux;
	for(i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	int proximaPosicao = 0;
	for(i = 0; i < tamanho; i++){
		for(j = 1 + proximaPosicao; j < tamanho; j++){
			if(vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
				j = 1;
			}
			if(j == tamanho - 1){
			    proximaPosicao++;  
			  
			}
		}
		
	}
	int posInicial = 0;
	int posFinal = tamanho - 1;
	int numeroProcurado;
	cin >> numeroProcurado;
	cout << buscaBinariaRecursiva(vetor, posInicial, posFinal, numeroProcurado);
	/*
	for(i = 0; i < tamanho; i++){
		cout << vetor[i];
	}*/
	return 0;
}
