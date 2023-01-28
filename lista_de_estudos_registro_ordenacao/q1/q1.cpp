#include <iostream>
using namespace std;
struct caracteristicaCarros{
	string nome;
	int ano;
	int preco;
};
int main(){
	int N;
	cin >> N;
	caracteristicaCarros carro[N];
	
	int i;
	for(i = 0; i < N; i++){
		cin >> carro[i].nome;
		cin >> carro[i].ano;
		cin >> carro[i].preco;
	}
	int precoDesejado;
	cin >> precoDesejado;
	
	for(i = 0; i < N; i++){
		if(carro[i].preco < precoDesejado){
			cout << carro[i].nome << '\t';
			cout << carro[i].ano << '\t';
			cout << carro[i].preco << endl;
		}
	}
	return 0;
}

