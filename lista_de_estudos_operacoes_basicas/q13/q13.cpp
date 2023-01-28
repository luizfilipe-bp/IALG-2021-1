#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int milissegundos, resto, hora, min;
	double seg;
	
	cin >> milissegundos;
	
	seg = (milissegundos / 1000.0) / 60.0; // transforma em minuto
	seg = (seg - int(seg)) * 60.0; // tira a parte inteira dos minutos e transforma a parte decimal em segundos 
	
	milissegundos /= 1000; // Converte para segundos
	
	hora = (milissegundos / 3600);
	resto = (milissegundos % 3600);
	
	min = resto / 60;
	
	cout << hora << " : " << min << " : " << seg;
	
	return 0;
}
