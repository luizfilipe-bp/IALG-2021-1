#include <iostream>
using namespace std;

int main(){
	int i, j;
	int tamanho;
	cin >> tamanho;
	string palavras[tamanho];
	int tamanhoPalavras[tamanho];
	int maior = 0;
	
	for(i = 0; i < tamanho; i++){
		cin >> palavras[i];
		tamanhoPalavras[i] = palavras[i].size();			//Cria um vetor com os tamanhos
		if(tamanhoPalavras[i] >= maior){					
			maior = tamanhoPalavras[i];						//Procura a maior palavra
		}
	}
	
	string vetorAsteriscos[tamanho];
	for(i = 0; i < tamanho; i++){
		for(j = 0; j < (maior - tamanhoPalavras[i]); j++){
			vetorAsteriscos[i] += "*";						//Cria um vetor com asteriscos com a diferença do tamanho das palavras
		}
		
		cout << vetorAsteriscos[i] + palavras[i] << endl;
	}

	return 0;
}
