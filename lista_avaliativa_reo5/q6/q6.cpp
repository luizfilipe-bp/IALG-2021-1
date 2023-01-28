#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int tamanho = 50;
	int trianguloFloyd[tamanho][tamanho]; 
	int elemento = 1;
	int linhaDeN = 0;
	
	int i, j;
	for(i = 0; i < tamanho and linhaDeN == 0; i++){
		for(j = 0; j <= i; j++){
			trianguloFloyd[i][j] = elemento;
			if(elemento == N){
				linhaDeN = i;
			}
			elemento++;
		}
	}
	for(j = 0; j < (linhaDeN + 1); j++){
		if(j < linhaDeN){
			cout << trianguloFloyd[linhaDeN][j] << "--";
		}else{
			cout << trianguloFloyd[linhaDeN][j];
		}
	}
	cout << endl;
	
	return 0;
}
