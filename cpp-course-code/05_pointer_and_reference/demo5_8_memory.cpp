//
// Created by 王存俊 on 2020/7/6.
//

#include <iostream>

using namespace std;

int a = 0;                      // GVAR 全局初始化区
int *p1;                        // bss 全局未初始化区

int main() {                    // text 代码区
	int b;                      // stack栈区变量
	char s[] = "abc";           // stack栈区变量
	int *p2;                    // stack栈区变量
	char *p3 = "123456";        // 123456在常量区, p3在栈区
	static int c = 0;           // GVAR全局静态初始化区
	p1 = new int(10);           // heap堆区变量
	p2 = new int(20);           // heap堆区变量

	return 0;                   // text代码区
}
