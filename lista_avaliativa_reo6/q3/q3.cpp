#include <iostream>
#include <cmath>
using namespace std;

struct informacoesCliente{
	string nome;
	double x;			//Coordenada X do cliente
	double y;			//Coordenada Y do cliente
	double valorPizza;
	double distancia;
};

int main(){
	int capacidadeClientes;
	cin >> capacidadeClientes;
	
	int coordXPizzaria;
	cin >> coordXPizzaria;
	int coordYPizzaria;
	cin >> coordYPizzaria;
	
	int totalClientes;
	cin >> totalClientes;
	informacoesCliente cliente[totalClientes];
	
	int i;
	for(i = 0; i < totalClientes; i++){
		cin >> cliente[i].nome;
		cin >> cliente[i].x;
		cin >> cliente[i].y;
		cin >> cliente[i].valorPizza;
		cliente[i].distancia = sqrt(pow((cliente[i].x - coordXPizzaria), 2) + pow((cliente[i].y - coordYPizzaria), 2));
	}
	
	int j;
	informacoesCliente aux;
	for(i = 1; i < totalClientes; i++){
		aux = cliente[i];			
		for(j = (i - 1); j >= 0 and aux.distancia < cliente[j].distancia; j--){
			cliente[(j + 1)] = cliente[j];
		}
		cliente[(j + 1)] = aux;
	}
	
	double soma = 0;
	for(i = 0; i < capacidadeClientes; i++){
		soma += cliente[i].valorPizza;
	}
	cout << soma << endl;
	return 0;
}
