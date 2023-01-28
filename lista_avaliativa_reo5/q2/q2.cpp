#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vetorHoras;
	int hora;
	vector<int> vetorMinutos;
	int minuto;
	do{
		cin >> hora;
		if(hora >= 0){
			cin >> minuto;
			vetorHoras.push_back(hora);
			vetorMinutos.push_back(minuto);
		}
	}while(hora != -1);
	
	int consultaHora;
	int consultaMinuto;
	cin >> consultaHora >> consultaMinuto;

	int posicaoDeTermino;
	int tamanhoVetores = vetorHoras.size();
	posicaoDeTermino = (tamanhoVetores * 70) / 100;		//Calcula a posição de termino de 70%
	cout << vetorHoras.at(posicaoDeTermino) << ':' << vetorMinutos.at(posicaoDeTermino) << endl;	
	
	bool encontrado = 1;
	if(consultaHora > vetorHoras[tamanhoVetores - 1]){
		posicaoDeTermino = tamanhoVetores;
	}else{
		for(int i = 0; i < tamanhoVetores and encontrado; i++){
			if((vetorMinutos[i] >= consultaMinuto and vetorHoras[i] == consultaHora)){
				posicaoDeTermino = (i + 1);					//Calcula a posição de termino dado um tempo
				encontrado = 0;								//Indica que a condição foi satisfeita
			}
			if(vetorMinutos[i] <= consultaMinuto and vetorHoras[i] > consultaHora){
				posicaoDeTermino = (i + 1);
				encontrado = 0;
			}
		}
	}
	
	cout << float(100 * posicaoDeTermino) / float(tamanhoVetores) << endl;
	return 0;
}
