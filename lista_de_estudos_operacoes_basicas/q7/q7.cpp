#include <iostream>
using namespace std;

int main(){
	
	int v_compra, dinheiro_recebido, resto, qnt_notas;
	
	cin >> dinheiro_recebido;
	cin >> v_compra;
	
	qnt_notas = (dinheiro_recebido - v_compra) / 20; //Notas de 20
	resto = (dinheiro_recebido - v_compra) % 20;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 10; //Notas de 10
	resto = resto % 10;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 5; //Notas de 5
	resto = resto % 5;
	cout << qnt_notas << endl;
	
	qnt_notas = resto / 2; // Notas de 2
	resto = resto % 2;
	cout << qnt_notas << endl;
	 
	qnt_notas = resto / 1; //Notas de 1
	resto = resto % 1;
	cout << qnt_notas << endl;
	
	return 0;
}
