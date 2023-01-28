#include <iostream>
using namespace std;

int main(){
	int l;
	cin >> l;
	int c;
	cin >> c;
	int matriz[l][c];
	
	int i, j;
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			cin >> matriz[i][j];
		}
	}
	
	for(i = 0; i < l; i++){
		if((i % 2) == 0){
			for(j = (c - 1); j >= 0; j--){
				cout << matriz[i][j] << ' ';
			}
		}else{
			for(j = 0; j < c; j++){
				cout << matriz[i][j] << ' ';
			}
		}
	}
	cout << endl;
	
	return 0;
}
