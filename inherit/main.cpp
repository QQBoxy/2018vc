#include <iostream>
#include <math.h>
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

//�~��
class Point3D : public Point2D {
public:
	Point3D() {
		this->z = 0;
	}
public:
	int z;
};

class TRI {
public:
	Point3D A;
	Point3D B;
	Point3D C;
	Point3D N;

public:
	float AB() { return distance(A, B); };
	float BC() { return distance(B, C); };
	float AC() { return distance(A, C); };

private:
	float distance(Point3D A, Point3D B);
};

float TRI::distance(Point3D A, Point3D B) {
	return sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y) + (B.z - A.z)*(B.z - A.z));
}

//�ۭq���
//�D�V�q
Point3D subVectors(Point3D a, Point3D b) {
	Point3D c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
	return c;
}

//�D�~�n
Point3D crossVectors(Point3D a, Point3D b) {
	Point3D c;
	c.x = a.y * b.z - a.z * b.y;
	c.y = a.z * b.x - a.x * b.z;
	c.z = a.x * b.y - a.y * b.x;
	return c;
}

//���W��
Point3D normalize(Point3D a) {
	Point3D c;
	float len = sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
	len = len != 0 ? len : 1; //�O�@
	c.x = a.x / len;
	c.y = a.y / len;
	c.z = a.z / len;
	return c;
}

int main(void) {

	Point3D A; //�IA
	A.x = 1.0; A.y = 0.0; A.z = 0.0;

	Point3D B; //�IB
	B.x = -1.0; B.y = 0.0; B.z = 0.0;

	Point3D C; //�IC
	C.x = 0.0; C.y = 1.0; C.z = 0.0;

	//Point3D N; //�k�V�qN
	//N.x = 0.0; N.y = 0.0; N.z = 1.0;

	Point3D ab = subVectors(A, B); //ab�V�q
	Point3D cb = subVectors(C, B); //cb�V�q
	Point3D N = crossVectors(ab, cb); //�k�V�qN
	N = normalize(N); //���W��

	TRI ABC;
	ABC.A = A; //A�I�y��
	ABC.B = B; //B�I�y��
	ABC.C = C; //C�I�y��
	ABC.N = N; //�k�V�q

	cout << "AB:" << ABC.AB() << endl;
	cout << "BC:" << ABC.BC() << endl;
	cout << "AC:" << ABC.AC() << endl;

	cout << "N:" << ABC.N.x << ", " << ABC.N.y << ", " << ABC.N.z << endl;

	system("pause");
	return 0;
}