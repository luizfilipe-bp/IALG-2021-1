#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeEntrada;
	cin >> nomeEntrada;
	
	ifstream arquivoOriginal(nomeEntrada);
	ofstream cifrado("cifrado.txt");
	string dados;
	while(getline(arquivoOriginal, dados)){
		for(int i : dados){
			if(i == 32){
				cifrado << char(32);
			}else{
				cifrado << char(90 + 65 - i);
			}
		}
		cifrado << endl;
	}
	
	return 0;
}
