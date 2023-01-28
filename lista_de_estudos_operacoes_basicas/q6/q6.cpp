#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int quantidade_de_homens;
	double quantidade_de_caravelas;
	
	cin >> quantidade_de_homens;
	
	quantidade_de_caravelas = (quantidade_de_homens - 1000.0) / 80.0;
	
	cout << ceil(quantidade_de_caravelas);
	
	return 0;
}
