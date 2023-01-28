#include <iostream>
using namespace std;

int main(){
	int tamanho;
	cin >> tamanho;
	float vetor[tamanho];
	
	int i, j, k;
	float aux;
	float soma = 0
	for(i = 0; i < tamanho; i++){
		cin >> vetor[i];
		soma += vetor[i];
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
	system("PAUSE");

	return 0;
}
