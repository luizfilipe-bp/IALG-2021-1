#include <iostream>
#include <cmath>
using namespace std;
struct clienteDados{
	string nome;
	double coordX;
	double coordY;
	double valorPizza;
	double distancia;
};
void shellsort(clienteDados cliente[], int tam){
	int vSaltos[] = {1, 3, 5, 7};
	int posSaltos = 3;
	while(tam < vSaltos[posSaltos]){
		posSaltos--;
	}
	int i, j;
	clienteDados aux;
	while(posSaltos >= 0){
		int salto = vSaltos[posSaltos];
		for(i = salto; i < tam; i++){
			aux = cliente[i];
			for(j = i; j >= salto and aux.distancia < cliente[(j - salto)].distancia; j = (j - salto)){
				cliente[j] = cliente[(j - salto)];
			}
			cliente[j] = aux;
		}
		posSaltos--;
	}
}
int main(){
	int qntAtendimentos;
	cin >> qntAtendimentos;
	int coordXPizzaria;
	cin >> coordXPizzaria;
	int coordYPizzaria;
	cin >> coordYPizzaria;
	
	int totalClientes;
	cin >> totalClientes;
	int i;
	clienteDados cliente[totalClientes];
	for(i = 0; i < totalClientes; i++){
		cin >> cliente[i].nome
			>> cliente[i].coordX
			>> cliente[i].coordY
			>> cliente[i].valorPizza;
			cliente[i].distancia = sqrt(pow((cliente[i].coordX - coordXPizzaria), 2) + pow((cliente[i].coordY - coordYPizzaria), 2));
			
	}
	shellsort(cliente, totalClientes);
	double soma = 0;
		for(i = 0; i < qntAtendimentos; i++){
			soma += cliente[i].valorPizza;
	}
	cout << soma;
}
