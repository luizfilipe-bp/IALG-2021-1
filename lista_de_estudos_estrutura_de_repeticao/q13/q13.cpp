#include <iostream>
using namespace std;

int main(){
	// <= 127 = preto | > 127 = branco
	int N; // Qnt de questoes
	int A, B, C, D, E;
	int cont = 0;
	
		cin >> N;
		
		if(N >= 1 and N <= 255){
			while(cont < N){
				cin >> A >> B >> C >> D >> E;
				
				if(A <= 127 and B <= 127){
					cout << 1;
				}else if(A<= 127 and C <= 127){
					cout << 2;
				}else if(A <= 127 and D <= 127){
					cout << 3;
				}else if(A <= 127 and E <= 127){
					cout << 4;
				}
				cont++;
			}
		}

	return 0;
}
