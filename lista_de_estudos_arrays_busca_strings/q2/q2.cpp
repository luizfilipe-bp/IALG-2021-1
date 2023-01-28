#include <iostream>
using namespace std;

int elementosValidos(int vetor[], int tamanho){
	int validos = 0;
	for(int i = 0; i < tamanho; i++){
		if((vetor[i] % 3) == 0){
			vetor[i] = -1;
			
		}else{
			validos++;
		}
	}
	return validos;
}
int main(){
	int tamanho;
	int validos;
	cin >> tamanho;
	
	int vetor[tamanho];
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	validos = elementosValidos(vetor, tamanho);
	
	for(int i = 0; i < tamanho; i++){
		if(vetor[i] != -1){
			cout << vetor[i] << ' ';
		}
	}
	cout << endl << validos;
	return 0;
}
