#include <iostream>
#include <string>
using namespace std;
void swapRef(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Inside swap function: " << a << " " << b << endl;
	cout << "Address of a: " <<  a << endl;
}

int main()
{
	int a, b;
	cout << "Enter a integers: ";
	cin >> a;
	cout << "Enter b integers: ";
	cin >> b;
	cout << "Before swap function: " << a << " " << b << endl;
	cout << "Address of a: " << &a << endl;
	swap(a, b);
	cout << "After swap function: " << a << " " << b << endl;




	return 1;
}