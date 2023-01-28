#include <iostream>
using namespace std;

int reverso(int num){
	int revertido = 0;
	int algarismo = 0;
	
	while(num > 0){
		revertido *= 10;
		algarismo = num % 10;
		num /= 10;	
		revertido += algarismo;
	}
	return revertido;
}

int main(){
	int num;

	cin >> num;
	cout << reverso(num);
	
	return 0;
}
