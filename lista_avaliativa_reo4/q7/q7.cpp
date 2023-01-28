#include <iostream>
using namespace std;

int macho(int);
int femea(int termo){
	if(termo == 0){
		return 1;
	}else{
		 return termo - macho(femea(termo - 1));
	}
}

int macho(int termo){
	if(termo == 0){
		return 0;
	}else{
		 return termo - femea(macho(termo - 1));
	}
}

int main(){
	int termo;
	int cont = 0;
	
	while(cont >= 0 and cont <= 5){
		cin >> termo;
		
		if(cont >= 0 and cont <= 2){
			cout << femea(termo) << ' ';
		}else if(cont >= 3 and cont <= 5){
			cout << macho(termo) << ' ';
		}
		cont++;
	}
	return 0;
}
