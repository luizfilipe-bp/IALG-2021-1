#include <iostream>
#include <iomanip>
using namespace std;

double previsao_distancia(double distancia, double velocidade, double tempo){
	
	return tempo * (velocidade / 1.852) + distancia;
}
int main(){
	double distancia = 0, velocidade, tempo;
	
	
	while(distancia != -1){
		cin >> distancia;
		if(distancia != -1){
			cin >> velocidade; 
			cin >> tempo;
			
			distancia /= 1.852; 	//Converte em milhas nauticas
			cout << setprecision(2) << fixed << distancia << ' ';
			cout << previsao_distancia(distancia, velocidade, tempo) << endl;
		}
	}
	return 0;
}
