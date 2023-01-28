#include <iostream>
using namespace std;
struct dadosStormtroopers{
	string nome;
	string planeta;
	int qntBatalhas;
};
struct dadosPlanetas{
	string nome;
	int qntStormtroopers;
	double qntMediaBatalhas;
};
int main(){
	int totalStorm;
	cin >> totalStorm;
	dadosStormtroopers stormtrooper[totalStorm];
	
	int i;
	int j;
	for(i = 0; i < totalStorm; i++){
		cin >> stormtrooper[i].nome;
		cin >> stormtrooper[i].planeta;
		cin >> stormtrooper[i].qntBatalhas;
	}
	
	dadosPlanetas planeta[totalStorm];
	int planetasCadastrados = 0;
	for(i = 0; i < totalStorm; i++){					//Percorre o vetor stormtrooper
		j = 0;
		while((j < planetasCadastrados) and (planeta[j].nome != stormtrooper[i].planeta))j++;
		if(j < planetasCadastrados){					//Foi achado um planeta que ja foi cadastrado
			planeta[j].qntStormtroopers += 1;
			planeta[j].qntMediaBatalhas += stormtrooper[i].qntBatalhas;
		}else{											//Se o for percorrer todo o vetor planeta então não foi achado um planeta de mesmo nome
			planeta[j].nome = stormtrooper[i].planeta;
			planeta[j].qntStormtroopers = 1;
			planeta[j].qntMediaBatalhas = stormtrooper[i].qntBatalhas;
			planetasCadastrados++;
		}
	}
	
	for(i = 0; i < planetasCadastrados; i++){
		cout << planeta[i].nome << ' ' << planeta[i].qntStormtroopers << ' ';
		cout <<  (planeta[i].qntMediaBatalhas / planeta[i].qntStormtroopers) << endl;
	}
	
	return 0;
}
