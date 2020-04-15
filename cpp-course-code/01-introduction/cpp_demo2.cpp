//
// Created by 王存俊 on 2020/4/15.
//

#include "stdio.h"

// C语言实现方式
static int noisy = 1; // 状态信息

void trace2(char *s) {
	if (noisy)
		printf("%s\n", s);
}

void trace_on() {
	noisy = 1;
}

void trace_off() {
	noisy = 0;
}

// C++实现方式
class Trace {
public:
	Trace() {
		noisy = 0;
		f = stdout;
	}

	Trace(FILE *ff) {
		noisy = 0;
		f = ff;
	}

	void on() { noisy = 1; }

	void off() { noisy = 0; }

	void print(char *s) {
		if (noisy)
			fprintf(f, "%s\n", s);
	}

private:
	int noisy; // 状态信息
	FILE *f;
};

int main() {
	trace_on();
	trace2("hello");
	trace_off();
	trace2("hello");


	Trace t;
	t.on();
	t.print("hello2");
	t.off();
	t.print("hello2");


	FILE *f = fopen("cpp_demo1.txt", "w");
	Trace t2(f);
	t2.on();
	t2.print("hello2");
	t2.off();
	t2.print("hello2");
	fclose(f);

	return 0;
}