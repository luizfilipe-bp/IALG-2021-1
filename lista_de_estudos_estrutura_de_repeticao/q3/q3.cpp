#include <iostream>
using namespace std;

int main(){
	
	char letra;
	int cont = 0, conversao, cont_a = 0, cont_b = 0;
	
	
	while(cont < 10){
		cont++;
		cin >> letra;
		
		conversao = int(letra);
		
		if(conversao == 97){
			cont_a++;
			
		}else if(conversao == 98){
			cont_b++;
		}
	}
		if(cont_a < cont_b){
			cout << 1;
			
		}else{
			cout << 0;
		}
		
	return 0;
}
