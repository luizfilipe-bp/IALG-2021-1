#include <iostream>
using namespace std;

struct dadosFuncionarios{
	int id;
	double horasTrabalhadas;
	double valorHora;
	double salario;
};

void entradaDados(dadosFuncionarios funcionario[], int i){
	cin >> funcionario[i].id;
	cin >> funcionario[i].horasTrabalhadas;
	cin >> funcionario[i].valorHora;
	funcionario[i].salario = funcionario[i].horasTrabalhadas * funcionario[i].valorHora;
}

void bubbleSortComEscrita(dadosFuncionarios funcionario[], int tamanho){	
	dadosFuncionarios troca;
	int i;
	for(i = (tamanho - 1); i >= 0; i--){
		for(int j = 0; j <= (i - 1); j++){
			if(funcionario[j].salario > funcionario[(j + 1)].salario){
				troca = funcionario[j];
				funcionario[j] = funcionario[(j + 1)];
				funcionario[(j + 1)] = troca;
			}
		}
	}	
	for(i = 0; i < tamanho; i++){
		cout << funcionario[i].id << ' ';
		cout << funcionario[i].salario << endl;
	}
}
int main(){
	int qntFunc;
	cin >> qntFunc;
	dadosFuncionarios funcionario[qntFunc];
	
	int i;
	for(i = 0; i < qntFunc; i++){
		entradaDados(funcionario, i);
	}
	
	bubbleSortComEscrita(funcionario, qntFunc);
	
	return 0;
}
