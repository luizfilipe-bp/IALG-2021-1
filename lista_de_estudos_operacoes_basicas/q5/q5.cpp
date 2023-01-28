#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double altura_degraus, altura_total, quantidade_degraus;
	
	cin >> altura_degraus;
	cin >> altura_total;
	
	quantidade_degraus = altura_total /(altura_degraus * 0.01);
	
	cout << ceil(quantidade_degraus);
	
	
	return 0;
}
