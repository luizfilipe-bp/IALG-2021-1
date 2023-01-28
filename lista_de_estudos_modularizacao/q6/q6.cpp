#include <iostream>
using namespace std;

int multiplicacao(int num1, int num2){
	if(num2 == 1){
		return num1;
	}else if(num1 == 0 or num2 == 0){
		return 0;
	}else{
		return num1 + multiplicacao(num1, (num2 - 1));
	}
}

int main(){
	int num1, num2;
	cin >> num1 >> num2;
	
	cout << multiplicacao(num1, num2);
	return 0;
}
