#include <iostream>
using namespace std;

int main(){
	
	float n1, n2, n3, n4;
	
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	
	if(n1 <= n2 and n1 <= n3 and n1 <= n4){	//N1
		if(n2 <= n3 and n2 <= n4){
			cout << n1 << endl << n2;
			
		}else if(n3 <= n2 and n3 <= n4){
			cout << n1 << endl << n3;
			
		}else{
			cout << n1 << endl << n4;
		}
		
	}else if(n2 <= n1 and n2 <= n3 and n2 <= n4){ //N2
		if(n1 <= n3 and n1 <= n4){
			cout << n2 << endl << n1;
			
		}else if(n3 <= n1  and n3 <= n4){
			cout << n2 << endl << n3;
			
		}else{
			cout << n2 << endl << n4;
		}
		
	}else if(n3 <= n1 and n3 <= n2 and n3 <= n4){ //N3
		if(n1 <= n2 and n1 <= n4){
			cout << n3 << endl << n1;
			
		}else if(n2 <= n1 and n2 <= n4){
			cout << n3 << endl << n2;
			
		}else{
			cout << n3 << endl << n4;
		}
		
	}else{								//N4
		if(n1 <= n2 and n1 <= n3){
			cout << n4 << endl << n1;
			
		}else if(n2 <= n3 and n2 <= n1){
			cout << n4 << endl << n2;
			
		}else{
			cout << n4 << endl << n3;
		}
	}
	return 0;
}
