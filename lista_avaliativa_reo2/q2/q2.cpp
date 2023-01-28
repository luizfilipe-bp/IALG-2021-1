#include <iostream>
using namespace std;

int main(){
	
	int energia, tempo_luta, socos;
	
	cin >> energia;
	cin >> tempo_luta;
	
	socos = tempo_luta * 60 * 2;
	
	energia = energia - (socos * 12);
	
	cout << socos << endl << energia;
	return 0;
}
