#include <iostream>
using namespace std;
int funcao_f(int x);
int funcao_h(int x);

int funcao_f(int x){
	if(x == 0){
		return 1;
	}else if(x > 0 and x % 2 == 0){
		return 2 * funcao_h((x)) + funcao_f((x - 1));
	}else{
		return 2 * funcao_h((x)) - funcao_f((x - 1));
	}
	
}

int funcao_h(int x){
	if(x == 0){
		return 0;
	}else{
		return funcao_h(x - 1) + funcao_f(x - 1);
	}
}

int main(){
	int x;
	
	cin >> x;
	
	cout << funcao_f(x);
	return 0;
}
