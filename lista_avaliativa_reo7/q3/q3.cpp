#include <iostream>
#include <fstream>
using namespace std;
struct dadosPokemon{
	string nome;
	string tipo;
	int distancia;
};
void shellsortPk(dadosPokemon pokemon[], int tam){
	int vSaltos[] = {1, 3, 5, 7, 15};
	int posSaltos = 4;
	while(tam < vSaltos[posSaltos]){
		posSaltos--;
	}
	int i, j;
	dadosPokemon aux;
	while(posSaltos >= 0){
		int salto = vSaltos[posSaltos];
		for(i = salto; i < tam; i++){
			aux = pokemon[i];
			for(j = i; j >= salto and aux.distancia < pokemon[(j - salto)].distancia; j = (j - salto)){
				pokemon[j] = pokemon[(j - salto)];
			}
			pokemon[j] = aux;
		}
		posSaltos--;
	}
}
int main(){
	ifstream entradaPokemon("dados.txt");
	ofstream saidaPokemon("pokemon.txt");
	
	string dados;
	int dadosNum;
	entradaPokemon >> dadosNum;
	int qntPokemon;
	qntPokemon = dadosNum;
	dadosPokemon pokemon[qntPokemon];
	int i = 0;
	while(i < qntPokemon){
		entradaPokemon >> dados;
		pokemon[i].nome = dados;
		entradaPokemon >> dados;
		pokemon[i].tipo = dados;
		entradaPokemon >> dadosNum;
		pokemon[i].distancia = dadosNum;
		i++;
	}
	shellsortPk(pokemon, qntPokemon);
	
	string tipoProcurado;
	cin >> tipoProcurado;
	int qntProcurada;
	cin >> qntProcurada;
	int j = 0;
	for(i = 0; (i < qntPokemon)and (j < qntProcurada); i++){
		if(pokemon[i].tipo == tipoProcurado){
			saidaPokemon << pokemon[i].nome << endl;
			j++;
		}
	}
	return 0;
}
