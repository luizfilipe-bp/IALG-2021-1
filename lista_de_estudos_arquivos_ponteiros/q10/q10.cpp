#include <iostream>
#include <fstream>
using namespace std;
int** geraMatriz(int N){
	int** matriz =  new int*[N];
	int i;
	for(i = 0; i < N; i++){
		matriz[i] = new int[N];
	}
	return matriz;
}
int comparaMatriz(int **matriz1, int **matriz2, int N){
	int i, j;
	int qntNavios = 0;
	for(i = 0; i < N; i++){
		int contM1_Linha = 0;
		int contM2_Linha = 0;
		int contM1_Col = 0;
		int contM2_Col = 0;
		int navio = 0;
		for(j = 0; j < N; j++){
			if(matriz2[i][j] > 0){
				contM2_Linha++;
			}else{
				contM2_Linha = 0;
			}
			
			if(matriz1[i][j] > 0){
				contM1_Linha++;
				if(navio == 0){
					navio = matriz1[i][j];
				}
			}
			if(matriz1[i][j] == 0 or j == N - 1){
				if(contM1_Linha <= contM2_Linha and contM1_Linha >= 2){
					qntNavios++;
					contM1_Linha = 0;
					contM2_Linha = 0;
					navio = 0;
				}
			}
			//Verificacao dos navios nas colunas
			if(matriz2[j][i] > 0){
				contM2_Col++;
			}else{
				contM2_Col = 0;
			}
			if(matriz1[j][i] > 0){
				contM1_Col++;
			}
			if(matriz1[j][i] == 0 or j == N - 1){
				if(contM1_Col <= contM2_Col and contM1_Col >= 2){
					qntNavios++;
					contM1_Col = 0;
					contM2_Col = 0;
				}
			}
		}
	}
	return qntNavios;
}
void deletaMatriz(int **matriz, int N){
	for(int i = 0; i < N; i++){
		delete[]matriz[i];
	}
	delete[]matriz;
}
void arquivo(ifstream entrada){
	
}
int main(){
	ifstream entrada("BatalhaNaval.txt");
	int dadosInt;
	entrada >> dadosInt;
	int N = dadosInt;
	
	int **matriz1 = geraMatriz(N);
	int **matriz2 = geraMatriz(N);
	int i, j;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			entrada >> dadosInt;
			matriz1[i][j] = dadosInt;
		}
	}
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			entrada >> dadosInt;
			matriz2[i][j] = dadosInt;
		}
	}
	
	cout << comparaMatriz(matriz1, matriz2, N);
	deletaMatriz(matriz1, N);
	deletaMatriz(matriz2, N);
	
	return 0;
}
