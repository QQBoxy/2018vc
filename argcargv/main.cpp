//Example1 - argcargv

//�ޥΨ禡�w�A�ϥμзǨ禡�w
#include <iostream>

//�зǨ禡�w���R�W�Ŷ�
using namespace std;

//�D�禡�g�k
int main(const int argc, char *argv[]) //��o�~���Ѽ�
{
	//�~���ѼƭӼ�
	cout << "argc: " << argc << endl;

	//�~���ѼƤ��e
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

	//�e�XCommand�R�O: pause
	system("pause");

	//�^�ǲפ�
	return 0;
}