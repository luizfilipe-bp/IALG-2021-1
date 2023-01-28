#include <iostream>
using namespace std;

int main(){
	
	int qnt_fichas, cont = 0, cont_m = 0, cont_f = 0;
	float altura, soma_altura = 0, soma_altura_m = 0, soma_altura_f = 0, altura_maior = 0, altura_menor = 100;
	char gen;
	
	cin >> qnt_fichas;
	
	while(cont < qnt_fichas){
		cont++;
		
		cin >> altura >> gen;
		
		soma_altura += altura;
		
		if(altura > altura_maior){
			altura_maior = altura;
				
		}
		
		if(altura < altura_menor){
			altura_menor = altura;
		}
		
		if(gen == 'm'){
			soma_altura_m += altura;
			cont_m++;
			
		}else if(gen == 'f'){
			soma_altura_f += altura;
			cont_f++;
		}
		
	}
	
	cout << altura_maior << endl << altura_menor << endl;
	
	if(cont_f == 0){
		cout << "erro" << endl;
	}else{
		cout << float(soma_altura_f) / float(cont_f) << endl;
	}
	
	if(cont_m == 0){
		cout << "erro" << endl;
	}else{
		cout << soma_altura_m / float(cont_m) << endl;
	}
	
	cout << soma_altura / float(cont);
		
	return 0;
}
