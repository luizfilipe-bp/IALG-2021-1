#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int matriz[N][N];
	int soma = 0;
	int l, c;

	for(l = 0; l < N; l++){
		for(c = 0; c < N; c++){
			cin >> matriz[l][c];
		}
	}
	for(l = 0; l < N; l++){
		for(c = 0; c < N; c++){
			if((l + c == (N - 1)) and l < c){		//Verifica se está na metade depois da diagonal segundaria
				for(c = c + 1; c < N; c++){			//Soma as proximas colunas
					soma += matriz[l][c];
				}
			}else if((l == c) and (l + c >= N)){	//Verifica se está na metade depois da diagonal principal
				for(c = c + 1; c < N; c++){			//Soma as proximas colunas
					soma += matriz[l][c];
				}
			}
		}
	}
	
	cout << soma;
	return 0;
}
