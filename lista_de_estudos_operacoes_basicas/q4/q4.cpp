#include <iostream>
using namespace std;

int main(){
	
	float base_maior, base_menor, altura;
	
	cin >> base_maior;
	cin >> base_menor;
	cin >> altura;
	
	cout << ((base_maior + base_menor) * altura) / 2;
	return 0;
}
