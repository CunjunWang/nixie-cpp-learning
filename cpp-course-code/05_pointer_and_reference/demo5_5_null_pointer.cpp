//
// Created by 王存俊 on 2020/7/5.
//

#include <iostream>

using namespace std;

int main() {
	int a = 123;

	// NULL的使用
	int* pA = NULL;
	pA = &a;

	// 检查判断NULL指针
	if (pA != NULL) {
		cout << *pA << endl;
	}

	// 不用的时候重新赋值为NULL
	pA = NULL;

	return 0;
}