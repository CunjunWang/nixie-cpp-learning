//
// Created by 王存俊 on 2020/6/21.
//

#include <iostream>

using namespace std;

int main() {
	// array of pointers 指针的数组
	int c[4] = { 0x80000000, 0xFFFFFFFF, 0x00000000, 0x7FFFFFFF };
	int* a[4];  // 指针的数组
	int (*b) [4];  // 数组的指针
	b = &c; // 数组元素个数需要匹配

	for (unsigned int i = 0; i < 4; i++) {
		a[i] = &(c[i]);
	}

	cout << *(a[0]) << endl;
	cout << (*b)[3] << endl;

	return 0;
}