#include <iostream>
using namespace std;
int hoare(int vetor[], int posI, int posF){
	int pivo = vetor[((posF - posI)/ 2) + posI];
	cout << pivo << ": ";
	int i = posI - 1;
	int j = posF + 1;
	int aux;
	while(true){
		do{
			i++;
		}while(vetor[i] < pivo);
		do{
			j--;
		}while(vetor[j] > pivo);
		if(i >= j){
			for(int k = posI; k <= posF; k++){
				cout << vetor[k] << ' ';
			}
			cout << endl;
			return j;
		}
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}
}
void quickSort(int vetor[], int inicio, int fim){
	int indiceParticiona;
	if(inicio < fim){
		indiceParticiona = hoare(vetor, inicio, fim);
		quickSort(vetor, inicio, indiceParticiona);
		quickSort(vetor, (indiceParticiona + 1), fim);
	}
}
int main(){
	int tam;
	cin >> tam;
	int vetor[tam];
	for(int i = 0; i < tam; i++){
		cin >> vetor[i];
	}
	quickSort(vetor, 0, (tam - 1));
	for(int i = 0; i < tam; i++){
		cout << vetor[i] << ' ';
	}
	return 0;
}
