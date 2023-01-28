#include <iostream>
#include <string>
using namespace std;
int tempo(int hora_inicio, int min_inicio, int hora_fim, int min_fim){
	int hora_percorrida;
	int min_percorrido;
	
	if(hora_fim == 0){
		hora_fim = 24;
	}
	hora_percorrida = hora_fim - hora_inicio;
	min_percorrido = min_fim - min_inicio;
	
	return (hora_percorrida * 60) + min_percorrido;
}

double penalidade(int tempo_percorrido){
	int max = 65;
	int min = 55;
	
	if(tempo_percorrido > max){
		tempo_percorrido -= max;
	}else if(tempo_percorrido < min){
		tempo_percorrido = (tempo_percorrido - min) * -1;
	}else{
		return 0;
	}
	return tempo_percorrido * 0.1;
}
int main(){
	int hora_inicio;
	int hora_fim;
	int min_inicio;
	int min_fim;
	int tempo_percorrido;
	string escola;
	
	while(escola != "fim"){
		cin.ignore();
		getline(cin, escola);
		
		if(escola != "fim"){
			cin >> hora_inicio >> min_inicio;
			cin >> hora_fim >> min_fim;
			tempo_percorrido = tempo(hora_inicio, min_inicio, hora_fim, min_fim);
			cout << penalidade(tempo_percorrido) << endl;
	
		}
	}
	
    return 0;
}
