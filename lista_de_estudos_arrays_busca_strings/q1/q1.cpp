#include <iostream>
using namespace std;

void imprimeVetor(int vetor[], int tamanho){
	if(tamanho == 0){
		cout << "[]";
	}else{
		for(int i = 0; i < tamanho; i++){
			if(i == 0){
				cout << '[';
			}
			if(i != (tamanho - 1)){
				cout << vetor[i] << ", ";
			}else{
				cout << vetor [i] << ']';
			}
		}
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
	
	imprimeVetor(vetor, tamanho);
	cout << endl;
	return 0;
}
