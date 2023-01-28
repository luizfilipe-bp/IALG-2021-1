#include <iostream>
using namespace std;

// Data types
int main(){
	
	char grade = 'A';
	int age = 14;
//	float oneFloat = 1.1
	double gpa = 2.3; //Mode decimal points than float	
	bool isMale = true;
	
	cout << grade << endl << age << endl << gpa << isMale;
	
	string phrase = "FreeCodeCamp";
	
	cout << phrase.length(); // How many characters
	cout << phrase[0]; // Print the first letter
	
	phrase[0] = 'f'; // Changes the first letter
	
	cout << phrase.find("Code", 0); // Look if Code is in the phrase and if it is true, returns the position
	cout << phrase.substr(0, 3); // Returns the first 3 characters 
	
	return 0;
}
