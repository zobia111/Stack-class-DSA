
#include<iostream>
#include "Stack.h"
using namespace std;


int main() {
	//decimal to binary conversion

	Stack s(40);

	int dec, rem;
	cout << "enter" << endl;
	cin >> dec;
	do {
		rem = dec % 2;
		s.push(rem);
		dec = dec / 2;



	} while (dec > 0);

	while (s.isEmpty() == 0) {
		cout << s.pop();
	}


	system("pause");
	return 0;

}
