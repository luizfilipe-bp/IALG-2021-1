#include <iostream>
using namespace std;

int main(){
	int num, num_invertido = 0, resto, primeiro_num, ultimo_num, num_meio, multiplicador = 1, num_copia;
	
	cin >> num;
	num_copia = num;
	
	while(num != 0){
		
		resto = num % 10;

		num /= 10;
		
		if(multiplicador == 1){
			primeiro_num = resto; //Primeiro numero invertido 
		}else{
			ultimo_num = resto; //Ultimo numero invertido 
		}
		
		multiplicador *= 10;
	
	}
	
	multiplicador /= 10;
	num_meio = num_copia - (ultimo_num * multiplicador) - primeiro_num;
	
	num_invertido = (primeiro_num * multiplicador) + num_meio + ultimo_num;
	
	cout << num_invertido;
	
	
	return 0;
}
