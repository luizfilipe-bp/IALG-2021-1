#include <iostream>
using namespace std;

int tribonacci(int cont){
	if(cont == 0){
		return 0;
	}else if(cont == 1 or cont == 2){
		return 1;
	}else{
		return tribonacci((cont - 1)) + tribonacci((cont - 2)) + tribonacci((cont - 3));
	}
}

int main(){
	int termos;
	int cont = 1;
	cin >> termos;
	
	while(cont <= termos){
		cout << tribonacci(cont) << ' ';
		cont++;
	}
	return 0;
}
