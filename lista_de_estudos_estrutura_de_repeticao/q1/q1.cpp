#include <iostream>
using namespace std;

int main(){
	int n1, n2, div = 0;
	
	cin >> n1;
	cin >> n2;
	
	if((n1 > 0) and (n2 > 0)){
		if(n1 == n2){
			div = 1;
		}else if(n2 == 1){
			while(n1 >= 1){
				n1 -= n2;
				div++;
			}
		}else{
			while(n1 > 1){
				n1 -= n2;
				div++;
			}
		}
	}
	cout << div;
	return 0;
}
