#include <iostream>
using namespace std;

int main(){
	string palavra;
	cin >> palavra;
	
	int tamanho = palavra.size();
	int vogais = 0;
	
	for(int i = 0; i < tamanho; i++){
		if(palavra[i] == 'a' or palavra[i] == 'e' or palavra[i] == 'i' or palavra[i] == 'o' or palavra[i] == 'u'){
			vogais++;
		}
	}
	cout << vogais;
	return 0;
}
