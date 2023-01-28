#include <iostream>
using namespace std;

void simplificacao(int& numerador, int& denominador){
	int maior, menor, cont, mdc = -1;
	
	if(denominador != 0){	
		if(numerador > denominador){
			maior = numerador;
			menor = denominador;
		}else{
			maior = denominador;
			menor = numerador;
		}
		cont = maior;
		
		while(mdc == -1){
			if(menor % cont == 0 and maior % cont == 0){
				mdc = cont;
			}else{
				cont--;
			}
		}
		numerador /= mdc;
		denominador /= mdc;
	}
}

int main(){
	int numerador, denominador;
	cin >> numerador;
	cin >> denominador;
	
	simplificacao(numerador, denominador);
	
	cout << numerador << endl << denominador;
	return 0;
}
