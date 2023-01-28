#include <iostream>
using namespace std;

int mogwais(int cont){
	if(cont == 0){
		return 0;
	}else if(cont == 1){
		return 1;
	}else{
		return mogwais((cont - 1)) + mogwais((cont - 2));
	}
}

int main(){
	int n;
	int cont = 1;
	
	cin >> n;
	
	while(cont <= n){
		cout << mogwais(cont) << ' ';
		cont++;
	}
	return 0;
}
