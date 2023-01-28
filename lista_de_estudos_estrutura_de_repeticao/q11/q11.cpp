#include <iostream>
using namespace std;

int main(){
	
	int num, cont = 0, cont2 = 0, par_impar = 0;
	
	cin >> num;
	
	while(cont < num){ //linha
		
		while(cont2 < num){ //coluna
			if(par_impar %2 == 0){
				cout << '.';
				
			}else{
				cout << '#';
				
			}
			cont2++;
			par_impar++;
		}
		
		cout << endl;
		cont2 = 0;
		cont++;
	}
	
	return 0;
}
