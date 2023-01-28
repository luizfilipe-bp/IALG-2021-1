#include <iostream>
#include <cmath>

/* Aula de entrada e saída e Manutenibilidade e Manutenção de código*/
using namespace std;

int main(){
	float numero = 25;
	
	cout << "A raiz de " << numero << " e o valor " << sqrt(numero) << endl << endl;
	
	cout.precision(10);		// Informa precisão (casas decimais)
	cout.setf(ios::fixed);	// Informa que parte decimal deve ser impressa, mesmo que seja zero
	cout << "A raiz de " << numero << " e o valor " << sqrt(numero) << endl << endl;
	
	float numero2;
	
	cout << "Entrada de  um dado " << endl;
	cin >> numero2;
	cout << sqrt(numero2) << endl;
	
	float soma1, soma2;
	
	cout << "Entrada de multiplos dados " << endl;
	cin >> soma1 >> soma2;
	cout << soma1 + soma2 << endl;
	
	return 0;
}
