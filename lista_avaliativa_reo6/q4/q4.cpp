#include <iostream>
using namespace std;
struct caracteristicasProduto{
	int id;
	string descricao;
	double preco;
};
void preencheDados(caracteristicasProduto produto[],int tamanho){
	int i;
	for(i = 0; i < tamanho; i++){
		cin >> produto[i].id;
		cin.ignore(2, '\n');
		getline(cin, produto[i].descricao);
		cin >> produto[i].preco;
	}
}
void insertionSort(caracteristicasProduto produto[],int tamanho){
	int i, j;
	caracteristicasProduto aux;
	for(i = 1; i < tamanho; i++){
		aux = produto[i];			
		for(j = (i - 1); j >= 0 and aux.preco < produto[j].preco; j--){
			produto[(j + 1)] = produto[j];
		}
		produto[(j + 1)] = aux;
	}
}
void imprimeProduto(caracteristicasProduto produto[], int tamanho, double limSuperior, double limInferior){
	int i;
	bool produtoNaoEncontrado = 1;
	for(i = 0; i < tamanho; i++){
		if((produto[i].preco >= limInferior) and (produto[i].preco <= limSuperior)){
			cout << produto[i].id << ' ';
			cout << '"' << produto[i].descricao << '"' << ' ';
			cout << produto[i].preco << endl;
			produtoNaoEncontrado = 0;
		}
	}
	if(produtoNaoEncontrado){
		cout << "Inexistente" << endl;
	}
}
int main(){
	int qntProduto;
	cin >> qntProduto;
	caracteristicasProduto produto[qntProduto];
	
	preencheDados(produto, qntProduto);
	double limInferior;
	cin >> limInferior;
	double limSuperior;
	cin >> limSuperior;
	
	insertionSort(produto, qntProduto);
	imprimeProduto(produto, qntProduto, limSuperior, limInferior);
	
	return 0;
}
