#include <iostream>
using namespace std;

int main(){
	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	
	int i, j, k;
	int aux;
	for(i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	for(i = 1; i < tamanho; i++){
		aux = vetor[i];			//Possivel menor 
		for(j = i - 1; j >= 0 and aux < vetor[j]; j--){
			vetor[(j + 1)] = vetor[j];
		}
		vetor[(j + 1)] = aux;

	}
	for(k = 0; k < tamanho; k++){
		cout << vetor[k] << ' ';
	}
	cout << endl;

	return 0;
}
