#include <iostream>
using namespace std;
struct aluno {
    int id;
    int matricula;
};
int main(){
	int N;
	cin >> N;
	aluno alunos[N];
	
	int i;
	for(i = 0; i < N; i++){
		cin >> alunos[i].id >> alunos[i].matricula;				//Entrada de id e matricula
	}
	int j;
	int indiceMenor;
	aluno auxTroca;
	for(i = 0; i < N; i++){
		indiceMenor = i;
		for(j = i + 1; j < N; j++){
			if(alunos[j].id < alunos[indiceMenor].id){			//Ordena o registro pelo numero do id
				indiceMenor = j;
			}
		}
		auxTroca = alunos[i];
		alunos[i] = alunos[indiceMenor];
		alunos[indiceMenor] = auxTroca;
	}
	int idsParaBusca[4];
	for(i = 0; i < 4; i++){
		cin >> idsParaBusca[i];					
	}
	
	for(i = 0; i < N; i++){
		cout << alunos[i].id << ' ';			//Saida dos ids ordenados
	}
	cout << endl;
	
	int posInicial = 0;
	int posFinal = N - 1;
	int media;
	int posEncontrado = 0;
	for(i = 0; i < 4; i++){
		while(posInicial <= posFinal){
		media = (posInicial + posFinal) / 2;
			if(alunos[media].id == idsParaBusca[i]){
				posFinal = -1;
				posEncontrado = media;						//Busca binaria das matriculas utilizando os ids
			}else{
				if(alunos[media].id > idsParaBusca[i]){
					posFinal = media - 1;
				}else if(alunos[media].id < idsParaBusca[i]){
					posInicial = media + 1;
				}
			}
		}
		if(posEncontrado == 0){
			cout << 0 << endl;
		}else{
			cout << alunos[media].matricula << endl;
		}
		posInicial = 0;
		posFinal = N - 1;
		posEncontrado = 0;
	}
	return 0;
}
