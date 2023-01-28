#include <iostream>
using namespace std;

int main(){
	
	int divisor, numerador, resto;
	
	cin >> divisor;
	
	do{
		cin >> numerador;
		
		resto = (numerador % divisor);
	}while(resto != 2);
	
	cout << numerador / divisor;
	
	return 0;
}
