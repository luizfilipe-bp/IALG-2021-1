#include <iostream>
using namespace std;

int main(){
	
	int numerador, denominador;
	
	cin >> numerador;
	cin >> denominador;
	
	if((numerador == 0) or (denominador == 0)){
		cout << "erro";
		
	}else{
		cout << numerador / denominador << endl;
		cout << numerador % denominador;
	}
	return 0;
}
