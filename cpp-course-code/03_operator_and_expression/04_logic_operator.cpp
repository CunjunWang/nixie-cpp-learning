//
// Created by 王存俊 on 2020/6/18.
//

#include <assert.h>
#include <iostream>

bool A = false;
bool B = true;

using namespace std;

int main() {
	// De Morgan
	cout << (!(A || B) == (!A && !B)) << endl; // true, 1
	cout << (!(A && B) == (!A || !B)) << endl; // true, 1

	// To be or not to be
	cout << (A || !A) << endl; // true, 1
	cout << (B || !B) << endl; // true, 1

	assert((!(A || B) == (!A && !B)));
	assert((!(A && B) == (!A || !B)));
}
