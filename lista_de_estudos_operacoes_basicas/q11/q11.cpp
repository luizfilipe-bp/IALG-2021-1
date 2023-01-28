#include <iostream>
using namespace std;

int main(){
	
	double x1, x2, y1, y2, m, q;
	
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	
	m = (y2 - y1) / (x2 - x1);
	q = y1 - x1 * m;
	
	cout << m << endl << q;
	
	return 0;
}
