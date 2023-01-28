#include <iostream>
using namespace std;

double soma(int num){
	double s = 0;
	while(num != 0){
		s = s + (num *(num + 1.0) / (num + 3.0));
		num--;
	}
	return s;
	
}
int main(){
	int num;
	cin >> num;
	
	cout << soma(num);
	
	return 0;
}
