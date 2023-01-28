#include <iostream>
#include <fstream>
using namespace std;
double numeroAureo(int num){
	ofstream numIntermed("phi.txt", ios :: app);
	double phi;
	if(num == 1){
		numIntermed << 1 << endl;
		return 1;
	}else{
		num--;		
		phi = 1 + (1 / numeroAureo(num));
		numIntermed << phi << endl;
		return phi;
	}
}
int main(){
	int num;
	cin >> num;

	cout << numeroAureo(num);
	return 0;
}
