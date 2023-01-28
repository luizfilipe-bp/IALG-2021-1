#include <iostream>
using namespace std;

int main(){
	string palavra;
	cin >> palavra;
	int i =0;
	
    int tamanho = palavra.size();
	for(i = 0; i < tamanho; i++){
		if(palavra[i] == palavra[(i + 1)]){
			for(int j = i + 1; j < tamanho; j++){
				palavra[j] = palavra[j + 1];
			}
		tamanho--;
        i--;
		}
			
	}
	
	for(i = 0; i < tamanho; i++){
		cout << palavra[i];
	}
	return 0;
}
