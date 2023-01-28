#include <iostream>
using namespace std;

int main(){
	
	float valor;
	char moeda;
	
	cin >> valor;
	cin >> moeda;
	
	cout.precision(2);
	cout << fixed;
	
	switch(moeda){
		case 'D':	
			cout << valor / 3.26;
			break;
	
		case 'E':
			cout << valor / 3.88;
			break;
		
		case 'P':
			cout << valor / 0.19;
			break;
	}
	
	return 0;
}
