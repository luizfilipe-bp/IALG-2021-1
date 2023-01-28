#include <iostream> 
using namespace std;

int main(){
	
	int n1, n2, n3, n4, n5, n6, n7;
	double soma, desconto;
			
	cout.precision(2);
	cout << fixed;
	
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	cin >> n5;
	cin >> n6;
	cin >> n7;

	soma = n1 * 28.90 + n2 * 19.90 + n3 * 7.95 + n4 * 2.99 + n5 * 1.50 + n6 * 1.85 + n7 * 8.70;
	
	if(soma <= 200.00){
		desconto = soma * 0.05;
		
	}else{
		desconto = soma * 0.1;
	}
		
	cout << soma << endl << desconto << endl << soma - desconto;
	return 0;
}
