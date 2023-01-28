#include <iostream>
#include <vector>
using namespace std;

struct cliente{
	int codigo;
	double saldo;
};
int main(){
	vector <cliente> clientes;
	int i;
	bool fim = 1;
	cliente entrada;
	for(i = 0; i < 100 and fim; i++){
		cin >> entrada.codigo;
		if(entrada.codigo == -1){
			fim = 0;
		}else{
			cin >> entrada.saldo;
			clientes.push_back(entrada);
		}
	}
	int tamanho = clientes.size();
	bool umSaldoMaior = 0;
	if(tamanho > 0){
		int verificaValor;
		cin >> verificaValor;
		
		int j, iDoMenor;
		cliente aux;
		for(i = 0; i < tamanho; i++){
			iDoMenor = i;
			for(j = i + 1; j < tamanho; j++){
				if(clientes[j].saldo < clientes[iDoMenor].saldo){
					iDoMenor = j;
				}
			}
			aux = clientes[i];
			clientes[i] = clientes[iDoMenor];
			clientes[iDoMenor] = aux;
		}
		for(i = 0; i < tamanho; i++){
			if(clientes[i].saldo > verificaValor){
				cout << clientes[i].codigo << ' ' << clientes[i].saldo << endl;
				umSaldoMaior = 1;
			}
		}
	}
	if(tamanho == 0 or umSaldoMaior == 0){
		cout << -1;
	}
	return 0;
}
