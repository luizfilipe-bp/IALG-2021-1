#include <iostream>
using namespace std;

int main(){
	int i, j;
	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	
	for(i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	int aux;
	for(i = 0; i < tamanho; i++){
		for(j = tamanho - 1; j > 0; j--){
			if(vetor[j] > vetor[(j - 1)]){
				aux = vetor[(j - 1)];
				vetor[(j - 1)] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << ' ';
	}
	return 0;
}
