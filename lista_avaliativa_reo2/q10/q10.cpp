#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int x, y;
	
	cin >> x;
	cin >> y;
	
	if(x > 0 and y > 0){	//Q1
		cout << x / y;
		
	}else if(x > 0 and y < 0){	//Q4
		cout << pow(x, y);
		
	}else if(x < 0 and y > 0){	//Q2
		cout << x * y;
		
	}else{ 	//Q3
		cout << x + y;
		
	}
	
	return 0;
}
