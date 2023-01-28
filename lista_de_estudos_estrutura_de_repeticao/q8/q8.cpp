#include <iostream>
using namespace std;

int main(){
	int num, num_1 = 0, num_2 = 0, cont = 0, soma = 0;
	double media = 0;
	
	
	while(cont < 7){
		cont++; 
		
		
		cin >> num;
		soma += num;
		
		if(num >= num_2){
			num_2 = num;
			
			if(num_2 >= num_1){
				num = num_1;
				
				num_1 = num_2;
				num_2 = num;
			}	
		}		
	}
	media = (soma - num_1 - num_2) / 5.0;
	cout << num_1 << endl << num_2 << endl << media;
	return 0;
}
