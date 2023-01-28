#include <iostream>
using namespace std;

int main(){
	int i, j = 0;
	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	for(i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	
	int indiceMenor;
	int aux;
	for(i = (tamanho - 1); i >= 0; i--){
		indiceMenor = i;
		for(j = (i - 1); j >= 0; j--){
			if(vetor[j] < vetor[i]){
				indiceMenor = j;
			}
		}
		aux = vetor[i];
		vetor[i] = vetor[indiceMenor];
		vetor[indiceMenor] = aux;
	}
	
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << ' ';
	}
	return 0;
}
