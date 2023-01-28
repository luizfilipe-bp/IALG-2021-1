#include <iostream>
using namespace std;
void shellsortDetalhado(double vetor[], int vSaltos[], int tam, int posSaltos){
	while(tam < vSaltos[posSaltos]){
		posSaltos--;
	}
	int i, j;
	double aux;
	while(posSaltos >= 0){
		int salto = vSaltos[posSaltos];
		for(i = salto; i < tam; i++){
			aux = vetor[i];
			j = i;
	    	bool naoTroca = 1;
			while((j >= salto) and (aux < vetor[(j - salto)])){
				if(naoTroca){
				    cout << salto << ":\t";
    				for(int k = 0; k < tam; k++){
    					if(k != j){
    						cout << vetor[k] << '\t';	
    					}else{
    						cout << vetor[k] << "!\t";	
    					}
    				}
    				cout << endl;
    				cout << '\t';
    				for(int k = 0; k < tam; k++){
    					cout << vetor[k] << '\t';		
    				}    
    				naoTroca = 0;
    				cout << endl;
				}
				vetor[j] = vetor[j - salto];
				j = j - salto;
			}
			vetor[j] = aux;
			
			if(naoTroca){
				cout << salto << ":\t";
				for(int k = 0; k < tam; k++){
					if(k != j ){
						cout << vetor[k] << '\t';	
					}else{
						cout << vetor[k] << "!\t";	
					}
				}
				cout << endl;
				cout << '\t';
				for(int k = 0; k < tam; k++){
					cout << vetor[k] << '\t';		
				}
				cout << endl;
			}
		}
		posSaltos--;
	}
}
int main(){
	int qntSaltos;
	cin >> qntSaltos;
	int vSaltos[qntSaltos];
	int i;
	for(i = 0; i < qntSaltos; i++){
		cin >> vSaltos[i];
	}
	
	int tam;
	cin >> tam;
	double vetor[tam];
	for(i = 0; i < tam; i++){
		cin >> vetor[i];
	}
	shellsortDetalhado(vetor, vSaltos, tam, qntSaltos - 1);

}
