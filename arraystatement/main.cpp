//Example 4 - Array and Pointer
#include <iostream>
using namespace std;

int main(void)
{
	//宣告二維陣列
	int arr[2][4] = {
		{ 1, 2, 3, 4 },{ 5, 6, 7, 8 }
	};

	//指標位址
	int *address;
	address = &arr[0][0]; //陣列的第一筆位址

	cout << "Base16 Address\tData" << endl;
	cout << (address + 0) << "\t" << *(address + 0) << endl;
	cout << (address + 1) << "\t" << *(address + 1) << endl;
	cout << (address + 2) << "\t" << *(address + 2) << endl;
	cout << (address + 3) << "\t" << *(address + 3) << endl;
	cout << (address + 4) << "\t" << *(address + 4) << endl;
	cout << (address + 5) << "\t" << *(address + 5) << endl;
	cout << (address + 6) << "\t" << *(address + 6) << endl;
	cout << (address + 7) << "\t" << *(address + 7) << endl;

	system("pause");
	return 0;
}