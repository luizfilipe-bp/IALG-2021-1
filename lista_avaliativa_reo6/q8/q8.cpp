#include <iostream>
using namespace std;
void exibeVetor(int vetor[], bool troca, int tamanho, int p1 = -1, int p2 = -1){
	for(int i = 0; i < tamanho; i++){
		if(troca){
			if(i == p1){
				cout << vetor[p1] << " t" << '\t';
			}else if(i == p2){
				cout << vetor[p2] << " t" << '\t';
			}else{
				cout << vetor[i] << '\t';
			}
		}else{
			if(i == p1){
				cout << vetor[p1] << " *" << '\t';
			}else if(i == p2){
				cout << vetor[p2] << " *" << '\t';
			}else{
				cout << vetor[i] << '\t';
			}
		}
	}
	cout << endl;
}
void bubbleSort(int vetor[], int tamanho){
	int aux;
	bool troca;
	int i;
	for(i = (tamanho - 1); i >= 0; i--){
		for(int j = 0; j <= (i - 1); j++){
			if(vetor[j] > vetor[(j + 1)]){
				exibeVetor(vetor, troca = 1, tamanho, j, (j + 1));
				aux = vetor[j];
				vetor[j] = vetor[(j + 1)];
				vetor[(j + 1)] = aux;
			}else{
				exibeVetor(vetor, troca = 0, tamanho, j, (j + 1));
			}
		}
	}
	if(i == -1){
		exibeVetor(vetor, troca = 1, tamanho);
	}	
}

int main(){
	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	bubbleSort(vetor, tamanho);
	
	return 0;
}
