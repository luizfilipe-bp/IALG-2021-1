#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeDoArquivo;
	cin >> nomeDoArquivo;
	int posChar;
	cin >> posChar;
	ifstream arqEntrada(nomeDoArquivo);
	
	char caractere[1];
	int qntChar = 1;
	int qntPalavras = 1;
	
	arqEntrada.seekg(posChar*sizeof(char));
	arqEntrada.read(caractere, 1);
	cout.write(caractere, 1);
	arqEntrada.seekg(0, arqEntrada.beg);
	
	while(arqEntrada.read(caractere, 1)){
		if(caractere[0] == ' '){
			qntPalavras++;
		}
		qntChar++;
	}	
	ofstream arqSaida("resultado.txt");
	arqSaida << qntChar << ' ' << qntPalavras;
	
	return 0;
}
