#include <iostream>
using namespace std;

int ricci(int num1, int num2, int cont){
	if(cont == 0){
		return num1;
	}else if(cont == 1){
		return num2;
	}else{
		return ricci(num1, num2, (cont - 1)) + ricci(num1, num2, (cont - 2));
	}
}
int main(){
	int num1, num2, termos;
	int cont = 0;
	
	cin >> num1 >> num2;
	cin >> termos;
	
	while(cont < termos){
		cout << ricci(num1, num2, cont) << ' ';
		cont++;
	}
}
