#include <iostream>
using namespace std;

int main(){
	
	string cor1, cor2;
	int numero, metade, metade_invertida;
	
	cin >> cor1;
	cin >> cor2;
	cin >> numero;
	
	metade = numero % 1000; //Segunda metade dos algarismos
	numero = numero / 1000; //Primeira metade dos algarismos
	
	metade_invertida = (metade % 10) * 100;
	metade /= 10;
	metade_invertida = metade_invertida + ((metade % 10) * 10);
	metade /= 10;
	metade_invertida = metade_invertida + metade;
	
	if(numero == metade_invertida){
		cout << cor1;
		
	}else if(numero != metade_invertida){
		cout << cor2;
	}
	
	return 0;
}
