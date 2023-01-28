#include <iostream>
using namespace std;

void divisores(int num){
	int cont = 1;
	int cont_div = 0;
	while(cont <= num){
		if(num % cont == 0){
			cout << cont << endl;
			cont_div++;				 //Conta os divisores
		}
		cont++;
	}
	cont = 1;
	int cont_menor = 0;
	while(cont <= num){
		if(num % cont == 0){
			cont_menor++;		
		}
		if(num % cont == 0 and cont_menor == 2){	
			cout << cont << ' ';
		}
		if(num % cont == 0 and cont_menor == (cont_div - 1)){
			cout << cont << ' ';
		}
		cont++;
		
	}
}
int main(){
	int num;
	cin >> num;
	
	divisores(num);
	return 0;
}
