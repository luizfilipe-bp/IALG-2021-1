#include <iostream>
using namespace std;

int main(){
	int tamanho;
	cin >> tamanho;
	char caracteres[tamanho];
	int i;	
	for(i = 0; i < tamanho; i++){
		cin >> caracteres[i];
		if(caracteres[i] == ' '){
			i--;
		}
	}
	
	char charProcurado;
	cin >> charProcurado;
	bool encontrado = 0;
	for(i = 0; i < tamanho; i++){
		if(caracteres[i] == charProcurado){
			cout << i << ' ';
			encontrado = 1;
		}
	}
	if(!encontrado){
		cout << -1;
	}
	
	return 0;
}
