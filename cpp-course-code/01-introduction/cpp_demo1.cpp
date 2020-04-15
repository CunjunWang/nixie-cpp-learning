//
// Created by 王存俊 on 2020/4/15.
//

// C语言的实现方式 - 面向过程
#include "stdio.h"

void trace(char *s) {
	printf("%s\n", s);
}

// C++的实现方式 - OOP
class Trace {
public:
	void print(char *s) {
		printf("%s\n", s);
	}
};

int main() {
	trace("hello");

	Trace t;
	t.print("hello2");

	return 0;
}
