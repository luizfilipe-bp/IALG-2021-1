#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	cout << 40;
	cout << -21.4412;
	cout <<	5 + 7;
	cout << 3 - 1;
	cout << 5 * 2;
	cout << 10 % 3; // Returns the ramainder
	cout << (3 * 7) + 2;
	
	int number = 5;
	number++; // number = number + 1
	number--; // number = number - 1
	number += 31; // number = number + 31, same to - * /
	
	cout << 10 / 3; // returns 3 => wrong 
	cout << 10.0 / 3; // correct
	
	cout << pow(3, 3); // 3 cubed
	cout << sqrt(25);
	
	cout << round(4.88); // 5
	cout << ceil(3.4); //4 
	cout << floor(7.1); //7
	
	cout << fmax(3, 10); // Which number is bigger, returns 10
	cout << fmin(3, 10); // Do the oposite
	return 0;
}
