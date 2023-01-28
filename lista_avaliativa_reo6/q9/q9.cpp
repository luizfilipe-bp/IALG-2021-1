#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int vetor[N];
	
	int i;
	for(i = 0; i < N; i++){
		cin >> vetor[i];
	}
	
	int pivo;
	int j;
	for(i = 1; i < N; i++){
		pivo = vetor[i];
		for(j = (i - 1); pivo < vetor[j] and j >= 0; j--){
			vetor[(j + 1)] = vetor[j];
		}
		vetor[(j + 1)] = pivo;
	}
	
	int qntSoma;
	cin >> qntSoma;
	int soma = 0;
	for(i = (N - qntSoma); i < N; i++){
		soma += vetor[i];
	}
	cout << soma;
	return 0;
}
