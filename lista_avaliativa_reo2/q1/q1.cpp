#include <iostream>
using namespace std;

int main(){
	
	int lado;
	
	cin >> lado;
	
	if(lado >= 3){
		cout << lado * (lado - 3) / 2;
	}else{
		cout << 0;
	}
	
	return 0;
}
