
#include <iostream>
#include <string>
using namespace std;

double circleArea(double radius)
{
	return 3.14 * radius * radius;
}

double rectangleArea(double width, double height)
{
	double width, height;
	return width * height;
}
int main()
{
	double radius;
	double result;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	result = circleArea(radius);
	cout << "The area of the circle is: " << result << endl;

	double width, height;
	cout << "Enter the width";
	cin >> width;
	cout << "Enter the height";
	cin >> height;

	result = rectangleArea(width, height);
	cout << "The area of the rectangle is: " << result << endl;


	return 1;
}