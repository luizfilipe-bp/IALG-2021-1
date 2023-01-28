#include <iostream>
using namespace std;

long int fatorial(int termos){
	long int FATORIAL = 1;
	while(termos >= 1){
		FATORIAL = FATORIAL * termos;
		termos--;
	}
	return FATORIAL;
}

long int combinacao(int n, int k){
	return fatorial(n) / (fatorial(k) * fatorial((n - k)));
}

long int somatorio(int n){
	int k = 1;
	int SOMATORIO = 0;
	
	while(k <= n){
		SOMATORIO += combinacao(n, k);
		k++;
	}
	return SOMATORIO;
}
int main(){
	int n;
	cin >> n;
	
	cout << somatorio(n);
	return 0;
}
