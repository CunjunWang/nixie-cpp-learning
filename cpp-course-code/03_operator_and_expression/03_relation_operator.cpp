//
// Created by 王存俊 on 2020/6/18.
//

#include <iostream>

int A = 10;
int B = 20;

using namespace std;

int main() {
	cout << (A == B) << endl; // false, 0
	cout << (A != B) << endl; // true, 1
	cout << (A > B) << endl; // false, 0
	cout << (A < B) << endl; // true, 1
	cout << (A >= B) << endl; // false, 0
	cout << (A <= B) << endl; // true, 1
}