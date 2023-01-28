#include <iostream>
using namespace std;

int main(){
	
	int matricula = 1, matricula_p, matricula_s = 0;
	float nota = 0, nota_p = 0, nota_s = 0;
	
	while(matricula != 0){
		cin >> matricula >> cin >> nota;
		
		if(nota >= nota_s and matricula != 0){
			nota_s = nota;
			matricula_s = matricula;
			
			if(nota_s >= nota_p){
				nota = nota_p;		//Salva o valor anterior do primeiro 	
				matricula = matricula_p;
				
				nota_p = nota_s;
				matricula_p = matricula_s;
				
				nota_s = nota;
				matricula_s = matricula;
			}	
		}
	}
	cout << matricula_p << " " <<nota_p << endl << matricula_s << " " << nota_s;
	return 0;
}
