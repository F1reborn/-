#include <iostream>
#include <math.h>

using namespace std;

double pointDiff(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double pointDiff(double x1, double y1, double z1, double x2, double y2, double z2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
}

int main() {
	setlocale(LC_ALL, "RUS");
	cout << "1)Двумерное пространство: " << endl;
	double t = pointDiff(-1.0,4.0,-1.0, 2.0);
	double y = pointDiff(-7.0,3.0,-1.0, 2.0);
	double u = pointDiff(-1.0,4.0,-7.0, 3.0);
	double l = t + y + u;
	cout << "Периметр треугольника равен: " << l << endl << "2)Трёхмерное пространство: " << endl;
	t = pointDiff(2.0, 1.0, 3.0, 2.0, 0.0,5.0);
	y = pointDiff(2.0, 1.0, 3.0, 5.0, -1.0, 10.0);
	u = pointDiff(5.0, -1.0, 10.0, 2.0, 0.0, 5.0);
	l = t + y + u;
	cout << "Периметр треугольника равен: " << l << endl;
	return 0;
}

