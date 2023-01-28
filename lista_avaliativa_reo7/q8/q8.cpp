#include <iostream>
using namespace std;
void procuraMatriz(int **matriz, int *m, int *n, int num){
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			if(matriz[i][j] == num){
				*m = i;
				*n = j;
			}
		}
	}
	if((i == (*m)) and (j ==(*n))){
			*m = -1;
	}
}
int main(){
	int m, n;
	cin >> m >> n;
	int **matriz = new int*[m];
	int i;
	for(i = 0; i < m; i++){
		matriz[i] = new int[n];
	}
	int j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	
	int numProcurado;
	cin >> numProcurado;
	procuraMatriz(matriz, &m, &n, numProcurado);
	
	if(m == -1){
		cout << "ausente";
	}else{
		cout << m << ' ' << n;
	}
	for(i = 0; i < m; i++){
		delete[]matriz[i];
	}
	delete[] matriz;
	
	return 0;
}
