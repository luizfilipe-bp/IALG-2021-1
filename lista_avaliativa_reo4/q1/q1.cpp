#include <iostream>
using namespace std;
bool capicua(int num){
	int invertido = 0;
	int algarismo = 0;
	int num_copia = num;
	
	while(num > 0){
		invertido *= 10;
		algarismo = num % 10;
		num /= 10;	
		invertido += algarismo;
	}

	if(invertido == num_copia){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int num;
	bool resultado;
	cin >> num;
	
	resultado = capicua(num);
	if(resultado == 0){
		cout << "nao";
	}else if(resultado == 1){
		cout << "sim";
	}
	
	return 0;
}
