#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double saldo;
		
	cout << fixed << setprecision(2);	
	cin >> saldo;
	
	if(saldo < 0){
		cout << saldo << endl << 0;
		
	}else if(saldo >= 0 and saldo < 200){
		cout << saldo << endl << saldo * 0.10;
		
	}else if(saldo >= 200 and saldo < 400){
		cout << saldo << endl << saldo * 0.15;
		
	}else if(saldo >= 400 and saldo < 800){
		cout << saldo << endl << saldo * 0.20;
		
	}else if(saldo >= 800 and saldo < 1600){
		cout << saldo << endl << saldo * 0.25;
		
	}else{
		cout << saldo << endl << saldo * 0.30;
		
	}
	
	return 0;
}
