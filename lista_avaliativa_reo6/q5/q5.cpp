#include <iostream>
using namespace std;

void selectionsort(int vetor[], int ordenaAte){
	int posMenor;
	int aux;
	for (int i = ordenaAte; i >= 0; i--) {
		posMenor = i;
		for (int j = (i - 1); j >= 0; j--) {
			if (vetor[j] < vetor[posMenor])
				posMenor = j;
		}
		aux = vetor[i];
		vetor[i] = vetor[posMenor];
		vetor[posMenor] = aux;
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
	
	int ordenaAte;
	cin >> ordenaAte;
	selectionsort(vetor, ordenaAte);
	
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << ' ';
	}
	return 0;
}
