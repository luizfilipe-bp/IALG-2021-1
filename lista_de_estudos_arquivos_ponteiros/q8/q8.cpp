#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeArquivo;
	cin >> nomeArquivo;
	
	ifstream entradaCifra(nomeArquivo);
	ofstream cifrado("cifrado");
	string dados;
	while(entradaCifra >> dados){
		for(int i : dados){
			if(i == 88){
				cifrado << char(65);
			}else if(i == 89){
				cifrado << char(66);
			}else if(i == 90){
				cifrado << char(67);
			}else{
				cifrado << char(i + 3);
			}
		}
		cifrado << ' ';
	}
	
	return 0;
}
