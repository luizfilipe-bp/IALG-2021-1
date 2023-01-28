#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

	int cadeiras, cont = 0, n = 0;
	double raio, div;
	double pi = 3.14159265358;
	
	cin >> raio >> cadeiras;
	div = cadeiras / 2.0;
	
	while(cont < cadeiras){
		if(cont == 0){
			cout << raio << " " << 0.00 << endl; 
		}else{
			cout << fixed << setprecision(2) << cos((pi / div) + ((n * pi) / div)) * raio << " ";
			cout << fixed << setprecision(2) << sin(pi / div + ((n * pi) / div)) * raio << endl;
			n++;
		}
		cont++;
	}
	return 0;
}
