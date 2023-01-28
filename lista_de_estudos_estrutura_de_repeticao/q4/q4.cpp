#include <iostream>
using namespace std;

int main(){
	int num, cont = 0, cont1 = 0, letra = 97, coluna = 1;
	
	cin >> num;
	
	if(num < 27){
		
		while(cont < num){
			while(cont1 < coluna){
				cout << char(letra) << " ";
				cont1++;
				letra++;
				
			}
			cout << endl;
			letra = 97;
			cont1 = 0;
			coluna++;
			cont++;
		}
	}
	
	return 0;
}
