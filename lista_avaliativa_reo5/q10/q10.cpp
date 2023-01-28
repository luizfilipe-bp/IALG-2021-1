#include <iostream>
using namespace std;

int main(){
	int m;
	cin >> m;
	char vetorM[m];
	
	int n;
	cin >> n;
	char vetorN[n];
	
	int i;
	for(i = 0; i < m; i++){
		cin >> vetorM[i]; 
	}
	for(i = 0; i < n; i++){
		cin >> vetorN[i]; 
	}
	
	char vetorConcatenado[(m + n)];
	for(i = 0; i < (m + n); i++){
		if(i < m){
			vetorConcatenado[i] = vetorM[i];
		}else{
			vetorConcatenado[i] = vetorN[(i - m)];
		}
	}
	char vetorOrdenado[(m + n)];
	int k = 0;
	int j;
	for(i = 0; i < 26; i++){							//ASCII a = 97 | z = 122
		for(j = 0; j < (m + n); j++){
			if(vetorConcatenado[j] == char(97 + i)){
				vetorOrdenado[k] = vetorConcatenado[j];
				k++;
			}
		}
	}
	for(i = 0; i < (m + n); i++){
		cout << vetorOrdenado[i] << ' ';
	}
	cout << endl;
	return 0;
}
