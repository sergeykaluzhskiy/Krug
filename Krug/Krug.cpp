#include <iostream>
using namespace std;
const double pi = 3.14;

double CircleLenght(double radius)
{
	return 2.0 * pi * radius;
}

// Возвращает площадь окружности радиусом radius
double CircleArea(double radius)
{
	return pi * radius * radius;
}

int main()
{
	double radius;

	cout << "Enter radius of circe: ";
	cin >> radius;

	cout << "Lenght of circle = " << CircleLenght(radius) << std::endl;
	cout << "Area of circle = " << CircleArea(radius) << std::endl;

	return 0;
}