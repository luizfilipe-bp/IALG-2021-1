#include <iostream>
using namespace std;

int digitos(int num){
	int cont = 0;
	
	if(num == 0){
		return 0;
	}else{
		num /= 10;
		cont++;
		return digitos(num) + cont;
	}
}
int main(){
	int num;
	
	cin >> num;
	cout << digitos(num);
	
	return 0;
}
