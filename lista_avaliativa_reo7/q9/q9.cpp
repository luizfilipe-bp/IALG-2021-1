#include <iostream>

using namespace std;
double* obterVetor(int N){
	double* prtVetor = new double[N];
	for(int i = 0; i < N; i++){
		int fatorial = 1;
		int cont = i;
		while(cont >= 1){
			fatorial *= cont;
			cont--;
		}
		 prtVetor[i] = ((i * i) + 1.75) / ((2 * fatorial) + i);
	}
	return prtVetor;
}
int main(){
	int N;
	cin >> N;
	double* vetor = obterVetor(N);
	
	int M;
	cin >> M;
	for(int i = M; i < N; i++){
		cout << vetor[i] << endl;
	}
	delete[] vetor;
	return 0;
}
