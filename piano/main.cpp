//Example - Piano
#include <iostream>
#include <windows.h>
//#pragma comment(lib,"winmm.lib")
using namespace std;

int main(const int argc, char *argv[])
{
	int number = 0;
	bool isNotFinish = true;

	while (isNotFinish) {
		cin >> number;
		switch (number) {
		case 1: //Do
			PlaySound(TEXT("wav/c1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 2: //Re
			PlaySound(TEXT("wav/d1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 3: //Mi
			PlaySound(TEXT("wav/e1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 4: //Fa
			PlaySound(TEXT("wav/f1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 5: //Sol
			PlaySound(TEXT("wav/g1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 6: //La
			PlaySound(TEXT("wav/a1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 7: //Ti
			PlaySound(TEXT("wav/b1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 8: //Do'
			PlaySound(TEXT("wav/c2.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		default:
			isNotFinish = false;
			cout << "Bye." << endl;
			break;
		}
	}

	system("pause");
	return 0;
}