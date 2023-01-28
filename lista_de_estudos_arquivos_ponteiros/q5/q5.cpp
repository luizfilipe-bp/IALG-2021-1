#include <iostream>
using namespace std;

void intercala(int vetor[], int p, int q, int r){
	int i = p;
	int j = q + 1;
	int tam = r - p + 1;
	int aux[tam];
	int k = 0;
	
	for(k = 0; k <= tam; k++){
		if(i <= q and j <= r){
			if(vetor[i] >= vetor[j]){
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
void mergeiterativo (int v[], int tam) {
    int p, r, b = 1;
    while (b < tam) {
        p = 0;

        while (p + b < tam) {
            r = p + 2*b - 1;
            if (r >= tam){
				r = tam - 1;	
			}
			if(p != 0){	
				for(int i = 0; i < tam; i++){
					cout << v[i] << ' ';
				}
				cout << endl;
			}
            intercala(v, p, p+b - 1, r);
            p = p + 2*b;
        }
		for(int i = 0; i < tam; i++){
			cout << v[i] << ' ';
		}
		cout << endl;
        b = 2 * b;
    }
}

int main(){
	int tam;
	cin >> tam;
	int vetor[tam];
	
	for(int i = 0; i < tam; i++){
		cin >> vetor[i];
	}
	mergeiterativo(vetor, tam);

	return 0;
}
