//Example1 - argcargv

//まノㄧΑ畐ㄏノ夹非ㄧΑ畐
#include <iostream>

//夹非ㄧΑ畐㏑丁
using namespace std;

//ㄧΑ糶猭
int main(const int argc, char *argv[]) //莉眔场把计
{
	//场把计计
	cout << "argc: " << argc << endl;

	//场把计ず甧
	cout << "rgv[0]" << argv[0] << endl;

	//pen apple pineapple
	cout << "I have a " << argv[1] << "," << endl;
	cout << "I have a " << argv[2] << "." << endl;
	cout << "Uh! " << argv[2] << "-" << argv[1] << "!\n" << endl;

	cout << "I have a " << argv[1] << "," << endl;
	cout << "I have a " << argv[3] << "." << endl;
	cout << "Uh! " << argv[3] << "-" << argv[1] << "!\n" << endl;

	cout << argv[2] << "-" << argv[1] << "," << endl;
	cout << argv[3] << "-" << argv[1] << "." << endl;
	cout << "Uh! " << argv[1] << "-" << argv[3] << "-" << argv[2] << "-" << argv[1] << "!" << endl;

	//癳Command㏑: pause
	system("pause");

	//肚沧ゎ
	return 0;
}