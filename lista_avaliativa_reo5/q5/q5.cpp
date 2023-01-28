#include <iostream>
using namespace std;

int main(){
	int resultado = -1;
	int l = 5, c = 5;
	int cartela[l][c];
	int i = 0, j = 0;
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			cin >> cartela[i][j];
		}
	}
	
	int somaDiagPrincipal = 0, somaDiagSecundaria = 0;
	int somaLinha = 0, somaColuna = 0;
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			if(i == j){
				somaDiagPrincipal += cartela[i][j];
			}
			if(i + j == 4){
				somaDiagSecundaria += cartela[i][j];
			}
			somaLinha += cartela[i][j];
			somaColuna += cartela[j][i];
		}
		if(somaLinha == 5){
			resultado = 1;
			i = 5;
		}else if(somaColuna == 5){
			resultado = 2;
			i = 5;
		}else if(somaDiagPrincipal == 5){
			resultado = 3;
		}else if(somaDiagSecundaria == 5){
			resultado = 4;
		}
		somaLinha = 0;
		somaColuna = 0;	
	}
	cout << resultado << endl;
	return 0;
}
