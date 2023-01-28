#include <iostream>
using namespace std;

int main(){
	
	float mat, cien_nat, ling, red, cien_hum, media;
	
	cin >> mat;
	cin >> cien_nat;
	cin >> ling;
	cin >> red;
	cin >>cien_hum;
	
	if(red < 200){
		cout << -1;
	}else{
	mat *= 3;
	cien_nat *= 2;
	ling *= 2;
	red *= 2;
	
	media = (mat + cien_nat + ling + red + cien_hum) / 10;
	
	cout << media;
	}
	return 0;
}
