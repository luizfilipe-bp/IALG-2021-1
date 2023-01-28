#include <iostream>
using namespace std;
int elementoCentral(int vetor[], int pInicial, int pFinal, int elementoProcurado){
	int meio = (pInicial + pFinal) / 2;
	if(pInicial != pFinal){
		if(vetor[meio] > elementoProcurado){
			cout << vetor[meio] << ' ';
			return elementoCentral(vetor, pInicial, (meio - 1), elementoProcurado);
			
		}else if(vetor[meio] < elementoProcurado){
			cout << vetor[meio] << ' ';
			return elementoCentral(vetor, (meio + 1), pFinal, elementoProcurado);
			
		}else{
			cout << vetor[meio];
			return vetor[meio];
		}
	}else{
		cout << vetor[meio];
		return vetor[meio];
	}
}
int main(){
	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	int elementoProcurado;
	cin >> elementoProcurado;
	
	elementoCentral(vetor, 0, (tamanho - 1), elementoProcurado);
	return 0;
}
