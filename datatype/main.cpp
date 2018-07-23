//Example 2 - datatype
#include <iostream>
using namespace std;

int main(void)
{
	cout << "type\tbyte" << endl;

	//整數
	cout << "short\t" << sizeof(short) << endl; //2
	cout << "int\t" << sizeof(int) << endl; //4
	cout << "long\t" << sizeof(long) << "\n" << endl; //4

	//浮點數
	cout << "float\t" << sizeof(float) << endl; //4
	cout << "double\t" << sizeof(double) << endl; //8
	cout << "long double\t" << sizeof(long double) << "\n" << endl; //8

	//字元
	cout << "char\t" << sizeof(char) << "\n" << endl; //1

	//布林
	cout << "bool\t" << sizeof(bool) << endl; //1

	system("pause");
	return 0;
}
