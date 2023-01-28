#include <iostream>
using namespace std;

int main(){
	int tres = 3;
	int dois = 2;
	int primeiraMatriz[dois][tres];
	int segundaMatriz[tres][dois];
	int l;
	int c;
	int soma = 0, somaDois = 0;
	
	for(l = 0; l < dois; l++){
		for(c = 0; c < tres; c++){
			cin >> primeiraMatriz[l][c];
		}
	}
	for(l = 0; l < tres; l++){
		for(c = 0; c < dois; c++){
			cin >> segundaMatriz[l][c];
		}
	}
	
	for(l = 0; l < dois; l++){
		if(l == 0){
			for(c = 0; c < tres; c++){
				soma = primeiraMatriz[l][c] * segundaMatriz[c][l] + soma;					//Matriz final[0][0]
				somaDois = primeiraMatriz[l][c] * segundaMatriz[c][(l + 1)] + somaDois;		//Matriz final[0][1]
			}
			cout << soma << ' ' << somaDois << endl;
			soma = 0;
			somaDois = 0;
		}else{
			for(c = 0; c < tres; c++){
				soma = primeiraMatriz[l][c] * segundaMatriz[c][(l - 1)] + soma;				//Matriz final[1][0]
				somaDois = primeiraMatriz[l][c] * segundaMatriz[c][l] + somaDois;			//Matriz final[1][1]
			}
			cout << soma << ' ' << somaDois;
		}
		
	}
	return 0;
}
