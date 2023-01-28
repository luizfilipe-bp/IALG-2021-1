#include <iostream>
using namespace std;

int main(){
	int descendentes;
	int cont = 1;
	int cont1 = 1;
	int quarto = 1;
	int multiplo = 0;
	
	cin >> descendentes;
	
	while(cont <= descendentes){
		while(cont1 <= quarto){
			if(quarto % cont1 == 0){
				multiplo++;
			}
			cont1++;
		}
		if(multiplo % 2 != 0){
			cout << quarto << " ";
			}
		
		cont++;
		quarto++;
		cont1 = 1;
		multiplo = 0;
	}

	return 0;
}
