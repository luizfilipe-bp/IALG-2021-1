#include <iostream>
using namespace std;

int main(){
	int m = 4;
	double tabelaCustos[m][m];
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < m; j++){
			cin >> tabelaCustos[i][j];
		}
	}
	
	int tamanho;
	cin >> tamanho;
	int itinerario[tamanho];
	for(i = 0; i < tamanho; i++){
		cin >> itinerario[i];
	}
	
	double somaDoItinerario = 0;
	for(i = 0; i < (tamanho - 1); i++){
		somaDoItinerario += tabelaCustos[itinerario[i]][itinerario[(i + 1)]]; 
	}
	cout << somaDoItinerario << endl;
	
	return 0;
}
