	#include <iostream>
using namespace std;
int sucessor(int& N){
	N++;
	return N;
}
int antecessor(int& N){
	N--;
	return N;
}

int soma(int X, int Y){
	if(X == 0){
		return Y;
	}else if(Y == 0){
		return X;
	}else if((X > 0 and Y > 0) or (X < 0 and Y > 0)){
		antecessor(Y);
		sucessor(X);
		return soma(X, Y);
	}else{
		antecessor(X);
		sucessor(Y);
		return soma(X, Y);
	}
}
int main(){
	int X;
	int Y;
	
	cin >> X >> Y;
	
	cout << soma(X, Y);
	return 0;
}
