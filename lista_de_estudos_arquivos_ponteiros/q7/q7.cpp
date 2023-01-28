#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream numeros("numeros");
	int dadosNum;	
	ofstream pares("pares");
	ofstream impares("impares");
	while(numeros >> dadosNum){
		if(dadosNum % 2 == 0){
			pares << dadosNum << ' ';
		}else{
			impares << dadosNum << ' ';
		}	
	}
	return 0;
}
