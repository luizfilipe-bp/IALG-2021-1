#include <iostream>
#include <fstream>
using namespace std;

struct dadosCorruptos{
	string nome;
	string partido;
	double valorDesviado;
};
void intercala(dadosCorruptos vetor[], int p, int q, int r){
	int i = p;
	int j = q + 1;
	int tam = r - p + 1;
	dadosCorruptos aux[tam];
	int k = 0;
	
	for(k = 0; k < tam; k++){
		cout << "v[i] desviado: " << vetor[i].valorDesviado << " v[j] desviado " << vetor[j].valorDesviado << endl; 
		if(i <= q and j <= r){
			if(vetor[i].valorDesviado >= vetor[j].valorDesviado){
				aux[k] = vetor[i++];
			}else{
				aux[k] = vetor[j++];
			}
		}else if(i > q){
			aux[k] = vetor[j++];
		}else{
			aux[k] = vetor[i++];
		}
	}
	for(int l = 0; l < tam; l++){
		vetor[p + l] = aux[l];
	}
}
void mergesort(dadosCorruptos vetor[], int posI, int posF){
	int meio;
	if(posI < posF){
		meio = (posI + posF) / 2;
		mergesort(vetor, posI, meio);
		mergesort(vetor, (meio + 1), posF);
		intercala(vetor, posI, meio, posF);
	}
}
int main(){
	int qntCorruptos;
	cin >> qntCorruptos;
	dadosCorruptos corrupto[qntCorruptos];
	
	int i;
	string dadosString;
	double valorRoubado;
	for(i = 0; i < qntCorruptos; i++){
		cin >> dadosString;
		corrupto[i].nome = dadosString;
		cin >> dadosString;
		corrupto[i].partido = dadosString;
		cin >> valorRoubado;
		corrupto[i].valorDesviado = valorRoubado;
	}
	mergesort(corrupto, 0, (qntCorruptos - 1));
	
	ofstream arqSaida("relacao_corruptos.txt");
	for(i = 0; i < qntCorruptos; i++){
		arqSaida << corrupto[i].nome << endl;
	}
}
