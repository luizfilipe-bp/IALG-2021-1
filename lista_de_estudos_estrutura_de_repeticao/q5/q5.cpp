#include <iostream>
using namespace std;

int main(){
	
	int num, num_triangular = 0, num1 = 1;
	
	cin >> num;
	
	while(num1 <= num){
		num_triangular = num1 + num_triangular;
		num1++;
	}
	
	cout << num_triangular;
	return 0;
}
