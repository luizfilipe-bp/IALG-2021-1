#include <iostream>
using namespace std;

int main(){
	
	float salario;
	
	cin >> salario;
	
	cout.precision(2);
	cout << fixed;
	
	if(salario <= 200.0){
		cout << salario * 0.1;
		
	}else if(salario <= 300.0){
		cout << salario * 0.2;
		
	}else if(salario <= 400.0){
		cout << salario * 0.25;
	}else{
		cout << salario * 0.3;
	}
	return 0;
}
