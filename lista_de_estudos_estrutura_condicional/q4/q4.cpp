#include <iostream>
using namespace std;

int main(){
	
	double mat_tec, cien_nat, ling_cod, red, cien_hum, media;
	cin >> mat_tec;
	cin >> cien_nat;
	cin >> ling_cod;
	cin >> red;
	cin >> cien_hum;
	
	if(red < 200){
		cout << -1;
		
	}else{

		mat_tec *= 3;
		cien_nat *= 2;
		ling_cod *= 2;
		red *= 2;
		
		media = (mat_tec + cien_nat + ling_cod + red + cien_hum) / 10;
		cout << media;
	}
	
	return 0;
}
