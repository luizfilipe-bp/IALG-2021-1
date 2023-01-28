#include <iostream>
using namespace std;

int main(){
	int termos, cont = 0;
	double euler = 0, fatorial = 1;
	
	cin >> termos;
	
	while(cont < termos){
		cont++;
		if(cont >= 2){	
			fatorial = fatorial * (cont - 1);
			euler = euler + (1.00/fatorial);

		}else if(cont == 1){
			euler = 1;
		}
	}
	cout << euler;
	return 0;
}
