#include <iostream>
using namespace std;
void quickSort(int v[], int esq, int dir) {
	int i, j, aux, pivo;
	i = esq;
	j = dir;
	pivo = v[(esq + dir)/2];
	int maior = 1, menor = 1000;
	while (i <= j) {
		while (v[i] < pivo) {
			i++;
		}
		while (v[j] > pivo) {
			j--;
		}
		if (i <= j){
			if(v[i] >= maior){
				maior = v[i];
			}
			if(v[j] <= menor){
				menor = v[j];
			}
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}

	}
	if(menor < maior){
		cout << maior << ' ' << menor << endl;
	}else{
		cout << -1 << ' ' << -1 << endl;
	}
	
	if(esq < j){
		quickSort(v, esq, j);
	}
	if(i < dir){
		quickSort(v, i, dir);
	}
}

int main(){
	int tamanho;
	cin >> tamanho;
	int v[tamanho];
	for(int i = 0; i < tamanho; i++){
		cin >> v[i];
	}
	quickSort(v, 0, (tamanho - 1));
}
