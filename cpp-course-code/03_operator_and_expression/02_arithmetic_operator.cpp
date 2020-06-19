//
// Created by 王存俊 on 2020/4/25.
//

#include <iostream>

int A = 10;
int B = 20;

using namespace std;

int main() {
	cout << A + B << endl; // 30
	cout << A - B << endl; // -10
	cout << A * B << endl; // 200
	cout << A / B << endl; // 0
	cout << B / A << endl; // 2
	cout << 15 / A << endl; // 1
	cout << 15.0 / A << endl; // 1.5
	cout << B % A << endl; // 0
	cout << ++A << endl; // 11
	cout << --A << endl; // 10
}