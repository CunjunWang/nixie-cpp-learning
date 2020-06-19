//
// created by 王存俊 on 2020/6/18.
//

#include <iostream>

int A = 10;
int B = 20;

using namespace std;

int main() {
	int C = A + B;
	cout << C << endl;
	cout << (C += A) << endl;
	cout << (C -= A) << endl;
	cout << (C *= A) << endl;
	cout << (C /= A) << endl;
	cout << (C %= A) << endl;
	cout << (C <<= A) << endl;
	cout << (C >>= A) << endl;
	cout << (C &= A) << endl;
	cout << (C ^= A) << endl;
	cout << (C |= A) << endl;
}
