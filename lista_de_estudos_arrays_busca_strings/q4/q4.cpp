#include <iostream>
using namespace std;

int main(){
	int tamanho = 10;
	int vetor[tamanho];
	int i;
	int k;
	cin >> k;
	
	for(i = 0; i < tamanho; i++){
		vetor[i] = 0;
	}
	for(i = 0; i < k; i++){
		cin >> vetor[i];
	}
	
	int novoElemento;
	cin >> novoElemento;
	int posicaoElemento;
	cin >> posicaoElemento;
	
	for(i = (tamanho - 1); i > posicaoElemento; i--){
		vetor[i] = vetor[(i - 1)];
	}
	vetor[posicaoElemento] = novoElemento;
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << ' ';
	}
	
	return 0;
}
