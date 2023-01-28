#include <iostream>
using namespace std;

int main(){
	
	int num, cont = 1, soma = 0;
	
	cin >> num;
	
	while(cont <= num){
		if(num % cont == 0 and cont != num){
			cout << cont << '+';
			soma += cont;
			
		}else if(num % cont == 0 and cont == num){
			cout << cont;
			soma += cont;
			cout << '=' << soma;
		}
		
		cont++;
	}
	return 0;
}
