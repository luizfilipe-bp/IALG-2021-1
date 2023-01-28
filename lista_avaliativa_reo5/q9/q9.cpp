#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<char> palavra;
	char caractere;
	int i =0;
	do{
		cin >> caractere;
		palavra.push_back(caractere);
		i++;
		
	}while();
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
