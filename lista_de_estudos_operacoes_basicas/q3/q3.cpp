#include <iostream>
using namespace std;

int main(){
	
	double conv_dolar, conv_euro, conv_libra, salario;
	
	cin >> salario;
	
	cout.precision(5);
	
	conv_dolar = salario / 2.13;
	conv_euro = salario / 2.84;
	conv_libra = salario / 3.34;
	
	cout << conv_dolar << endl << conv_euro << endl << conv_libra;
	
	return 0;
}
