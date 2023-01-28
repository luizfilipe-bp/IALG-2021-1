#include <iostream>
using namespace std;

int main(){
	
	char letra, conversao; 
	
	cin >> letra;
	
	conversao = int(letra); //conversão <= 90 == MAIUSCULA | conversão >= 97 == MINUSCULA
	
	if((65 >= conversao) or (conversao <= 90)){
		cout << "MAIUSCULA";
	}else{
		cout << "MINUSCULA";
	}
	
	
	
	return 0;
}
