//
// Created by 王存俊 on 2020/7/5.
//

#include <iostream>

using namespace std;

int main() {
	int a = 123;
	int* b = &a;
	int** c = &b;

	cout << a << endl;  // 123
	cout << &a << endl;  // address of a
	cout << b << endl;  // address of a
	cout << *b << endl;  // 123
	cout << &b << endl;  // address of b
	cout << c << endl;  // address of b
	cout << *c << endl;  // b, address of a
	cout << **c << endl;  // 123

	return 0;
}