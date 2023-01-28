#include <iostream>
using namespace std;

int main(){
	
	int num, linha = 0 , coluna = 0, cont = 1, posicao = 1;
	
	cin >> num;
	
	while(linha < num){
		while(coluna < cont){
			coluna++;
			
			if(posicao % 2 == 0){
				cout << '#';
			}else{
				cout << '@';
			}
			posicao++;
		}
		cout << endl;
		cont++;
		linha++;
		coluna = 0;
		posicao = 1;
	}
	return 0;
}
