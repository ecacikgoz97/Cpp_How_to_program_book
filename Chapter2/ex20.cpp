#include <iostream>

#define PI 3.14159

using namespace std;

int main()
{
	int r;
	
	cout << "Enter radius: ";
	cin >> r;

	cout << "Diameter: " << 2 * r << endl;
	cout << "Circumference: " << 2 * PI * r << endl;
	cout << "Area: " << PI * r * r << endl;

	return 0;
}
