#include <iostream>
using namespace std;

int main(){
	
	int termo1 = 0, termo2 = 0, cont = 0, termo_copia;
	
	cin >> termo1;
	cin >> termo2;
	
	termo_copia = termo1;
	
	if(termo1 == 0 or termo2 == 0){
		cout << 0;
	}else{
		while(cont < termo2){
			if(cont == 0){
				cout << termo1 << endl;
			}else{
				termo1 = termo1 + termo_copia;
				cout << termo1 << endl;
			}
			cont++;
		}
	}
	
	return 0;
}
