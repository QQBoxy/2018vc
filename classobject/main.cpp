#include <iostream>
using namespace std;

class Point2D {
public:
	Point2D() {
		this->x = 0;
		this->y = 0;
	}
public:
	int x;
	int y;
};

class TRI {
public:
	Point2D A;
	Point2D B;
	Point2D C;

public:
	float AB() { return distance(A, B); };
	float BC() { return distance(B, C); };
	float AC() { return distance(A, C); };

private:
	float distance(Point2D A, Point2D B);

};

float TRI::distance(Point2D A, Point2D B) {
	return sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
}

int main(void) {

	Point2D A;
	A.x = 1.0; A.y = 0.0;

	Point2D B;
	B.x = -1.0; B.y = 0.0;

	Point2D C;
	C.x = 0.0; C.y = 1.0;

	TRI ABC;
	ABC.A = A; //A點座標
	ABC.B = B; //B點座標
	ABC.C = C; //C點座標

	cout << "AB:" << ABC.AB() << endl;
	cout << "BC:" << ABC.BC() << endl;
	cout << "AC:" << ABC.AC() << endl;

	system("pause");
	return 0;
}