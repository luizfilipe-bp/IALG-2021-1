#include <iostream>
using namespace std;
struct professores{
	string nome;
	string primeiroAlimento;
	string segundoAlimento;
	int qntPrimeiro;
	int qntSegundo;
};

struct lista{
	string nome;
	int qntAlimento;
};
int main(){
	int qntProf;
	cin >> qntProf;
	professores professor[qntProf];
	lista alimento[(qntProf * 2)];
	int alimentosNaLista = 0;
	int i;
	int j = 0;
	for(i = 0; i < qntProf; i++){
		cin >> professor[i].nome;
		cin >> professor[i].primeiroAlimento;
		cin >> professor[i].qntPrimeiro;
		cin >> professor[i].segundoAlimento;
		cin >> professor[i].qntSegundo;
		
		while((j < alimentosNaLista) and professor[i].primeiroAlimento != alimento[j].nome)
			j++;
		if(j < alimentosNaLista){
			alimento[j].qntAlimento += professor[i].qntPrimeiro;
		}else{
			alimento[j].nome = professor[i].primeiroAlimento;
			alimento[j].qntAlimento = professor[i].qntPrimeiro;
			alimentosNaLista++;
		}
		j = 0;
		while((j < alimentosNaLista) and professor[i].segundoAlimento != alimento[j].nome)
			j++;
		if(j < alimentosNaLista){
			alimento[j].qntAlimento += professor[i].qntSegundo;
		}else{
			alimento[j].nome = professor[i].segundoAlimento;
			alimento[j].qntAlimento = professor[i].qntSegundo;
			alimentosNaLista++;
		}
		j = 0;	
	}
	
	for(i = 0; i < alimentosNaLista; i++){
		cout << alimento[i].nome << ' ' << alimento[i].qntAlimento << endl;
	}
	
	return 0;
}
