#include <iostream>
using namespace std;

int main(){
	int qnt_termos, n1 = 0, termo1 = 0, termo2 = 1, termo_n = 0;
	
	cin >>  qnt_termos;
	
	if(qnt_termos == 1){
		cout << 0;
	
	}else if(qnt_termos == 2){
		cout << 0 << endl << 1;
		
	}else{
		cout << 0 << endl << 1 << endl;
		
		while(n1 < qnt_termos-2){ //fib(1) = 0 fib(2) = 1 fib(3) = fib(1) + fib(2)
		
			termo_n = termo1 + termo2;
			n1++;
		
			termo1 = termo2;
			termo2 = termo_n;
			
			cout << termo_n << endl;
		
		}
	}
	
	return 0;
}
