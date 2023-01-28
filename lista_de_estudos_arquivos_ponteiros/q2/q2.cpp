#include <iostream>
using namespace std;
struct dadosFuncionario{
	int id;
	double hrsTrabalhadas;
	double valorHr;
	double salario;
};
int hoare(dadosFuncionario funcionario[], int posI, int posF){
	double pivo = funcionario[((posF - posI)/ 2) + posI].salario;
	int i = posI - 1;
	int j = posF + 1;
	dadosFuncionario aux;
	while(true){
		do{
			i++;
		}while(funcionario[i].salario < pivo);
		do{
			j--;
		}while(funcionario[j].salario > pivo);
		if(i >= j){
			return j;
		}
		aux = funcionario[i];
		funcionario[i] = funcionario[j];
		funcionario[j] = aux;
	}
}
void quicksort(dadosFuncionario funcionario[], int inicio, int fim){
	int indiceParticiona;
	if(inicio < fim){
		indiceParticiona = hoare(funcionario, inicio, fim);
		quicksort(funcionario, inicio, indiceParticiona);
		quicksort(funcionario, (indiceParticiona + 1), fim);
	}
}
int main(){
	dadosFuncionario funcionario[100];
	int entradaId;
	double entradaHrs;
	double entradaValorHr;
	int i = 0;
	do{
		cin >> entradaId;
		if(entradaId != -1){
			cin >> entradaHrs >> entradaValorHr;
			funcionario[i].id = entradaId;
			funcionario[i].hrsTrabalhadas = entradaHrs;
			funcionario[i].valorHr = entradaValorHr;
			funcionario[i].salario = entradaHrs * entradaValorHr;
			i++;
		}
	}while(entradaId != -1);
	quicksort(funcionario, 0, (i - 1));
	for(int j = 0; j < i; j++){
		cout << funcionario[j].id << ' ';
		cout << funcionario[j].salario << endl;
	}
	return 0;
}
