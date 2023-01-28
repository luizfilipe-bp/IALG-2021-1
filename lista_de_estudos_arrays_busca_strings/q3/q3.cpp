#include <iostream>
using namespace std;

int main(){
	int tamanho = 10;
	char vetorA[tamanho];
	char vetorB[tamanho];
	int i = 0;
	char aux = 0;
	int cont = 0;
	int posicaofinal = tamanho - 1;
	
	for(i = 0; i < tamanho; i++){
		cin >> vetorA[i];
	}
	for(i = 0; i < tamanho; i++){
		cin >> vetorB[i];
	}
	
	for(i = 0; i < tamanho; i++){
		if((i % 2 == 0)){
			aux = vetorA[i];
			vetorA[i] = vetorB[(posicaofinal - cont)];
			vetorB[(posicaofinal - cont)] = aux;
			cont++;
		}
	}
	
	for(i = 0; i < tamanho; i++){
		cout << vetorA[i] << ' ';
	}
	cout << endl;
	for(i = 0; i < tamanho; i++){
		cout << vetorB[i] << ' ';
	}
	return 0;
}
