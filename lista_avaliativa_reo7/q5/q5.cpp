#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream numeros("entrada.txt");
	int dadosArquivo;	
	ofstream arquivoSaida("saida.txt");
	
	numeros >> dadosArquivo;
	int tam = dadosArquivo;
	int vetor[tam];
	
	int i = 0;
	while(numeros >> dadosArquivo){
		vetor[i] = dadosArquivo;
		i++;
	}
	bool numIgual = 0;
	for(i = 0; i < tam; i++){
		for(int j = 0; j < i; j++){
			if(vetor[j] == vetor[i]){
				numIgual = 1;
			}
		}
		if(!numIgual){
			arquivoSaida << vetor[i] << ' ';
		}else{
			numIgual = 0;
		}
	}
	return 0;
}
