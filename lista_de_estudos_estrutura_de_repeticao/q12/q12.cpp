#include <iostream>
#include <cmath>
using namespace std;
	
int main(){
	int termos, cont = 0;
	double raiz_anterior = 0, soma, multi = 1.0;

	cin >> termos;

	while(cont < termos){
		if(cont == 0){
			raiz_anterior = 0;
		}else{
			raiz_anterior = soma;
		}
		
		soma = sqrt(2 + (raiz_anterior * 2)) / 2; //Soma das raizes

		multi = multi * soma;
		cont++;
	}
	
	cout << 2 / multi;

	return 0;
}
