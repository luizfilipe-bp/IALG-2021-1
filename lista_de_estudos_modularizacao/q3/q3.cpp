#include <iostream>
using namespace std;

int fatorial_duplo(int num){
	if(num == 0 or num == 1){
		return 1;
	}else{
		return num * fatorial_duplo((num - 2));
	}
}

int main(){
	int num;
	cin >> num;
	
	cout << fatorial_duplo(num);
	return 0;
}
