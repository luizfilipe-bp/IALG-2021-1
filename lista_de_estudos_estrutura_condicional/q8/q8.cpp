#include <iostream>
using namespace std;

int main(){
	
	int cod_prod, cod_pais;
	double peso, preco, imposto;
	
	cin >> cod_prod;
	cin >> peso;
	cin >> cod_pais;
	
	cout.precision(1);
	cout << fixed;
	
	if(cod_prod >= 1 and cod_prod <= 4){
		peso *= 1000; // Converte em grama
		cout << peso << endl;
		
		preco = peso * 10;
		cout << preco << endl;
		
		if(cod_pais == 1){
			imposto = 0.0;
			
		}else if(cod_pais == 2){
			imposto = preco * 0.15;
			
		}else if(cod_pais == 3){
			imposto = preco * 0.25;
			
		}
		cout << imposto << endl;
		cout << imposto + preco;
		
	}else if(cod_prod >= 5 and cod_prod <= 7){
		peso *= 1000; // Converte em grama
		cout << peso << endl;
		
		preco = peso * 25;
		cout << preco << endl;
		
		if(cod_pais == 1){
			imposto = 0.0;
			
		}else if(cod_pais == 2){
			imposto = preco * 0.15;
			
		}else if(cod_pais == 3){
			imposto = preco * 0.25;
			
		}
		cout << imposto << endl;
		cout << imposto + preco;
		
	}else if(cod_prod >= 8 and cod_prod <= 10){
		peso *= 1000; // Converte em grama
		cout << peso << endl;
		
		preco = peso * 35;
		cout << preco << endl;
		
		if(cod_pais == 1){
			imposto = 0.0;
			
		}else if(cod_pais == 2){
			imposto = preco * 0.15;
			
		}else if(cod_pais == 3){
			imposto = preco * 0.25;
			
		}
		cout << imposto << endl;
		cout << imposto + preco;	
	}
	
	return 0;
}
