//
// Created by 王存俊 on 2020/7/5.
//

#include <iostream>

using namespace std;

int main() {
	char ch = 'a';
	cout << ch << endl;  // a
	char *cp = &ch;
	cout << cp << endl;
	cout << *cp << endl;

	char *cp2 = ++cp;
	cout << cp2 << endl;
	cout << *cp2 << endl;
	cout << &cp2 << endl;

	char *cp3 = cp++;
	cout << cp3 << endl;
	cout << *cp3 << endl;

	char *cp4 = --cp;
	cout << cp4 << endl;
	cout << *cp4 << endl;

	char *cp5 = cp--;
	cout << cp5 << endl;
	cout << *cp5 << endl;

	// ++左值
	// ++cp2 = 97;
	// cp2++ = 97;

	*++cp2 = 98;
	char ch3 = *++cp2;
	cout << ch3 << endl;

	*cp2++ = 98;
	char ch4 = *cp2++;

	int a = 1, b = 2, c, d;
	c = a++ + b;
	char ch5 = ++*++cp;
	cout << ch5 << endl;

	return 0;
}
