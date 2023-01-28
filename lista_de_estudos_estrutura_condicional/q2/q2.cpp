#include <iostream>
using namespace std;

int main(){
	
	char sexo;
	double altura;
	
	cin >> sexo;
	cin >> altura;
	
	if(sexo == 'M'){
		cout << (72.7 * altura) - 58;
		
	}else{
		cout << (62.1 * altura) - 44.7;
		
	}
	
	return 0;
}
