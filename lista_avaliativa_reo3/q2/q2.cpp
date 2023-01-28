#include <iostream>
using namespace std;

int main(){
	
	int num, soma = 0;
	float cont_negativo = 0, cont_positivo = 0, cont_soma;
	
	do{
		cin >> num;
		if(num != 0){
			
			soma += num;
			
			if(num > 0){
				cont_positivo++;
			}else{
				cont_negativo++;
			}
		
		}
	}while(num != 0);
	
	cont_soma = cont_negativo + cont_positivo;
	
	cout << float(soma) / cont_soma << endl; // Media
	cout << cont_positivo << endl; //Qnt positivo
	cout << cont_negativo << endl; //Qnt negativo
	cout << cont_positivo / cont_soma << endl; //Percentual de positivos
	cout << cont_negativo / cont_soma; //Percentual de negativos
	
	return 0;
}
