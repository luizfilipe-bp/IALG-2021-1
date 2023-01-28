#include <iostream>
using namespace std;

int buscaBinaria(int vetor[], int numeroProcurado, int& posInicial, int posFinal, int& qntComparacao){
	int media = (posInicial + posFinal) / 2;
	if(posFinal > posInicial){
		if(vetor[media] == numeroProcurado){
			qntComparacao++;
			posInicial = media;
			return posInicial;				//Retorna o indice do numero procurado 
		}else if(vetor[media] > numeroProcurado){
			qntComparacao++;
			posFinal = (media - 1);
			return buscaBinaria(vetor, numeroProcurado, posInicial, posFinal, qntComparacao);
		}else{
			qntComparacao++;
			posInicial = (media + 1);
			return buscaBinaria(vetor, numeroProcurado, posInicial, posFinal, qntComparacao);
		}
	}else{
		qntComparacao++;
		posInicial = -1;
		return posInicial;
	}
}
int main(){
	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	
	if(tamanho == 0){
		cout << endl;
	}else{
		int i;
		for(i = 0; i < tamanho; i++){
			cin >> vetor[i];
		}
		int numeroProcurado;
		cin >> numeroProcurado;
		
		int posInicial = 0;
		int posFinal = (tamanho - 1);
		int qntComparacao = 0;
		buscaBinaria(vetor, numeroProcurado, posInicial, posFinal, qntComparacao);
		
		cout << posInicial << endl;
		cout << qntComparacao << endl;
	}
	return 0;
}
