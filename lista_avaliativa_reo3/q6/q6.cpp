#include <iostream>
using namespace std;

int main(){
	
	int quantidadeIngressos, entrada, cont = 0;
	
	cin >> quantidadeIngressos;
	
	do{
		cont++;
		cin >> entrada;
		
		if(entrada == cont){
			cout << entrada;	
		}else if(cont == quantidadeIngressos){
			cout << 0;
		}
		
	}while(quantidadeIngressos > cont and (entrada != cont) and (cont != quantidadeIngressos));
		
	return 0;
}
