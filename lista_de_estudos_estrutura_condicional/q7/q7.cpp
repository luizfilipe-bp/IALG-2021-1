#include <iostream>
using namespace std;

int main(){
	
	int cod;
	double investimento;
	
	cin >> cod;
	cin >> investimento;
	
	if(cod == 1){
		cout.precision(2);
		cout << fixed;
		cout << (investimento + investimento * 0.005);
		
	}else if(cod == 2){
		cout << (investimento + investimento * 0.03) - 30.00;
	}
	return 0;
}
