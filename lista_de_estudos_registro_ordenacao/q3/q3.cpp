#include <iostream>
#include <cmath>

using namespace std;
struct pessoa{
	double salario;
	int idade;
	int qntFilhos;
};
int main(){
	int qntPessoas;
	cin >> qntPessoas;
	pessoa entrevistado[qntPessoas];
	
	int i;
	double mediaSalarios = 0;
	double mediaQntFilhos = 0;
	double maiorSalario = 0;
	double maiorMil = 0;
	for(i = 0; i < qntPessoas; i++){
		cin >> entrevistado[i].salario;
		cin >> entrevistado[i].idade;
		cin >> entrevistado[i].qntFilhos;
		
		mediaSalarios += entrevistado[i].salario;
		mediaQntFilhos += entrevistado[i].qntFilhos;
		
		if(entrevistado[i].salario > maiorSalario){
			maiorSalario = entrevistado[i].salario; 
		}
		if(entrevistado[i].salario > 1000){
			maiorMil++;
		}
	}
	mediaSalarios /= qntPessoas; 
	mediaQntFilhos /= qntPessoas;
	cout << mediaSalarios << endl << mediaQntFilhos << endl;
	cout << maiorSalario << endl << round(((maiorMil / qntPessoas) * 100)) << '%';
	
	return 0;
}
