#include <iostream>
using namespace std;

int main(){
	int tamanho = 10;
	int valorUnitario[tamanho];
	int qntVendida[tamanho];
	int precoTotal[tamanho];
	
	int somaDasVendas = 0;
	int i;
	int posicaoMaiorQntVendida = 0, precoUnitarioMaiorQnt = 0;
	for(i = 0; i < tamanho; i++){
		cin >> valorUnitario[i];
		cin >> qntVendida[i];
		
		if(i >= 1){
			if(qntVendida[i] > qntVendida[(i - 1)]){
				posicaoMaiorQntVendida = i;
				precoUnitarioMaiorQnt = valorUnitario[i];
			}
		}
		precoTotal[i] = valorUnitario[i] * qntVendida[i];
		somaDasVendas += precoTotal[i];
		
	}
	double comissao = somaDasVendas * 0.05;
	double salarioFinal = 900 + comissao;
	
	for(i = 0; i < tamanho; i++){
		cout << qntVendida[i] << ' ';
		cout << valorUnitario[i] << ' ' ;
		cout << precoTotal[i] << endl;
	}
	cout << somaDasVendas << ' ' << salarioFinal << endl << precoUnitarioMaiorQnt << ' ' << posicaoMaiorQntVendida << endl;
	
	return 0;
}
