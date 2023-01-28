#include <iostream>
using namespace std;

int main(){
	
	double salario_min, salario_a_receber;
	int hrs_trabalhadas;
	
	cin >> salario_min;
	cin >> hrs_trabalhadas;
	
	salario_a_receber = ((0.05 * salario_min) * hrs_trabalhadas) * 0.77; 
	
	cout << salario_a_receber;
	
	
	return 0;
}
