//Example3 - Conditional and Loop
#include <iostream>
using namespace std;

int main(const int argc, char *argv[])
{
	//�~���ѼƭӼ�
	cout << "argc: " << argc << endl;

	//�~���ѼƤ��e
	cout << "rgv[0]" << argv[0] << endl;

	//�P�_�O�_���~���Ѽ�
	if (argc <= 1) {
		cout << "No params" << endl;
		system("pause");
		return 0;
	}

	//PPAP - pen apple pineapple
	int i = 0;
	int target = 0;
	for (i = 0; i < 2; i++) {

		cout << "I have a " << argv[1] << "," << endl;

		if (i==0) {
			target = 2; //�Ĥ@�Ӫ��~
		}
		else if (i == 1) {
			target = 3; //�ĤG�Ӫ��~
		}
		else {
			cout << "Error!" << endl;
			system("pause");
			return 0;
		}

		//switch (i) {
		//case 0:
		//	target = 2; //�Ĥ@�Ӫ��~
		//	break;
		//case 1:
		//	target = 3; //�ĤG�Ӫ��~
		//	break;
		//default:
		//	cout << "error!" << endl;
		//	system("pause");
		//	return 0;
		//}

		cout << "I have a " << argv[target] << "." << endl;

		cout << "Uh! " << argv[target] << "-" << argv[1] << "!\n" << endl;
	}

	cout << argv[2] << "-" << argv[1] << "," << endl;
	cout << argv[3] << "-" << argv[1] << "." << endl;
	cout << "Uh! " << argv[1] << "-" << argv[3] << "-" << argv[2] << "-" << argv[1] << "!" << endl;

	system("pause");
	return 0;
}