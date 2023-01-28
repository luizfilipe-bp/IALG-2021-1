#include <iostream>
using namespace std;
struct dados_Pacientes{
	string nome;
	char sexo;
	double altura;
	double peso;
	double diferencaPesoIdeal;
};
int main(){
	int quantidade;
	cin >> quantidade;
	dados_Pacientes paciente[quantidade];
	
	int i;
	double maiorPeso = 0;
	int indiceMaiorPeso;
	for(i = 0; i < quantidade; i++){
		cin >> paciente[i].nome;
		cin >> paciente[i].sexo;
		cin >> paciente[i].altura;
		cin >> paciente[i].peso;
		
		if(paciente[i].peso > maiorPeso){
			maiorPeso = paciente[i].peso;
			indiceMaiorPeso = i;
		}
		
		if(paciente[i].sexo == 'H'){
			paciente[i].diferencaPesoIdeal = (72.7 * paciente[i].altura - 58) - paciente[i].peso;
		}else if(paciente[i].sexo == 'M'){
			paciente[i].diferencaPesoIdeal = (62.1 * paciente[i].altura - 44.7) - paciente[i].peso;
		}
	}
	cout << paciente[indiceMaiorPeso].nome << endl;
	
	for(i = 0; i < quantidade; i++){
		if(paciente[i].diferencaPesoIdeal < 0){
			cout << paciente[i].nome << ' ' << paciente[i].diferencaPesoIdeal << endl;
		}
	}
	for(i = 0; i < quantidade; i++){
		if(paciente[i].diferencaPesoIdeal > 0){
			cout << paciente[i].nome << ' ' << paciente[i].diferencaPesoIdeal << endl;
		}
	}
	return 0;
}
