#include <iostream>
using namespace std;

int main(){
	string texto;
	cin >> texto;
	string busca;
	cin >> busca;
	
	int tamanhotexto = texto.size();
	int tamanhobusca = busca.size();
	int i;
	int j;
	
	for(i = 0; i < tamanhotexto; i++){
		if(busca[0] == texto[i]){
			for(j = 1; j < tamanhobusca ; j++ ){
				if(busca[j] != texto[(j + i)]){
					j = 255;	// Para a busca se o elemento da busca nao é igual do texto
				}
			}
			if(j == tamanhobusca){
				cout << i;		//Se j tem o valor do tamanho da busca todos elementos são iguais
				i = tamanhotexto;
			}
		}
	}
	if(i == tamanhotexto){
		cout << -1;
	}
	return 0;
}
