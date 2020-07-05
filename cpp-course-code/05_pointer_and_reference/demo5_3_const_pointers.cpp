//
// Created by 王存俊 on 2020/7/5.
//

#include <iostream>

using namespace std;

unsigned int MAX_LEN = 11;

int main() {
	char strHelloWorld[] = {"helloWorld"};

	char const *pStr1 = "hello world";  // const char * 是一样的

	char * const pStr2 = strHelloWorld;

	char const * const pStr3 = "helloWorld";  // const char * const 是一样的

	cout << pStr1 << endl;  // hello world

	pStr1 = strHelloWorld;

	cout << pStr1 << endl;  // helloWorld

	// pStr2 = strHelloWorld;

	// pStr3 = strHelloWorld;

	unsigned int len = strnlen(pStr2, MAX_LEN);
	cout << len << endl;

	for (unsigned int index = 0; index < len; ++index) {
		// pStr1[index] += 1;  // pStr1里的值不可变
		pStr2[index] += 1;
		// pStr3[index] += 1;  // pStr3里的值不可变
	}

	cout << pStr2 << endl;
	cout << pStr1 << endl;  // 也变了

	return 0;
}