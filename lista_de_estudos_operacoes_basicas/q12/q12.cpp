#include <iostream>
using namespace std;

int main(){
	
	int valor, resto, qnt_notas;
	
	cin >> valor;
	
	qnt_notas = valor / 100;
	resto = valor % 100;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 50;
	resto = resto % 50;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 20;
	resto = resto % 20;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 10;
	resto = resto % 10;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 5;
	resto = resto % 5;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 2;
	resto = resto % 2;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 1;
	resto = resto % 1;
	cout << qnt_notas << endl;
	
	return 0;
}
