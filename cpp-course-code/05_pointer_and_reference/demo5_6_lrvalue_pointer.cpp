//
// Created by 王存俊 on 2020/7/5.
//

#include <iostream>

using namespace std;

int main() {
	char ch = 'a';
	cout << ch << endl;  // a
	cout << &ch << endl;

//	&ch = 97;	// &ch左值不合法

	char* cp = &ch;	// &ch右值
	cout << cp << endl;  // address of ch
	cout << *cp << endl;  // a

//	&cp = 97;	// &cp左值不合法

	char** cpp = &cp;  // &cp右值
	cout << cpp << endl;  // address of cp;
	cout << *cpp << endl;  // value of cpp = a

	*cp = 'b';  // *cp左值取变量ch的位置
	cout << *cp << endl;  // b

	char ch2 = *cp;  // *cp右值去变量ch存储的值
	cout << ch2 << endl;  // b

	// *cp + 1 = 'a';  // *cp + 1左值是不合法的位置

	ch2 = *cp + 1;  // *cp + 1右值取到的字符做ASCII码 + 1的操作
	cout << ch2 << endl;  // c

	*(cp + 1) = 'a';  // *(cp + 1)左值语法上合法, 取ch后面的位置
	cout << *(cp + 1) << endl;

	ch2 = *(cp + 1);  // *(cp + 1)右值语法上合法, 取ch后面的位置的值
	cout << ch2 << endl;

	return 0;
}
