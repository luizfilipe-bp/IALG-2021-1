#include <iostream>
using namespace std;

int main(){
	
	int num1, num2;
	int maior, menor;
	int produto_maior, produto_menor;
	int cont = 1, cont1= 1;
	
	cin >> num1 >> num2;
	
	if(num1 > num2){
		maior = num1;
		menor = num2;
		
	}else{
		maior = num2;
		menor = num1;
	}
	
	produto_maior = maior;
	produto_menor = menor;
	
	if(maior == menor){
		cout << maior;
	}else{
		while(produto_maior != produto_menor){
			while(cont <= maior){
				cont++;
				if(produto_menor != produto_maior){
					produto_menor = menor * cont;
				}
			}
			if(produto_maior == produto_menor){
				cout << produto_menor;
			}else{
				cont = 1;
				cont1++;
				produto_maior = maior * cont1;
			}
		}	
	
	}
	
	return 0;
}
