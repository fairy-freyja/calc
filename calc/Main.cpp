#include "MyString.h"
#include <iostream>

using namespace std;

void process(MyString userInput) {
	cout << "Processing result of " + userInput << endl;
}

int main() {
	MyString userInput;

	cin.getline()
	cin >> userInput;
	while (userInput != "exit"){
		process(userInput);
		cin >> userInput;
	}
}