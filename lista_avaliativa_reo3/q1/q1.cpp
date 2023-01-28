#include <iostream>
using namespace std;

int main(){
	
	double energia_thor, energia_thanos;
	int golpes = 0;
	
	cin >> energia_thanos;
	cin >> energia_thor;
	
	while(energia_thor >= energia_thanos){
		energia_thanos *= 0.98;
		energia_thor *= 0.94;
		
		golpes++;
	}
	
	cout << golpes; 
	return 0;
}
