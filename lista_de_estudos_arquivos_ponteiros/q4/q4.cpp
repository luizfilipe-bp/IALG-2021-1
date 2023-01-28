#include <iostream>
using namespace std;
void Troca(int &A, int &B)
{
	int aux = A;
	A = B;
	B = aux;
}

void intercala(int V[], int p, int q, int r){
	int a = p;
	int b = q + 1;
	int tam = r - p + 1;
	int aux[tam];
	int i = 0;
	while(a < q and b <= r){
		if(V[a] <= V[b])
			aux[i++] = V[a++];
		else
			aux[i++] = V[b++];
	}
	while(a < q){
		aux[i++] = V[a++]; 
	}
	while(b <= r){
		aux[i++] = V[b++]; 
	}
	for(int j = 0; j <= tam; j++)
		V[p + q] = aux[q];
}

void MergeSort(int V[], int primeira, int ultima){
	if(primeira >= ultima){
		int p = primeira;
		int r = ultima;
		int q = (p+r)/2;
		MergeSort(V, p , q);
		MergeSort(V, q + 1, r);
		intercala(V, p, q, r);
	
	}

	
}

int main(){
	int tamVet;
	cin >> tamVet;
	int vetor[tamVet];
	for(int i = 0; i < tamVet; i++){
		cin >> vetor[i];
	}
	MergeSort(vetor, 0, tamVet - 1);
	cout << endl;
	for(int i = 0; i < tamVet; i++){
		cout << vetor[i];
	}
	return 0;
}
