#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Enter a four-digit integer: ";
	cin >> num;
	
	int a, b, c, d;
	
	a = num / 1000;
	b = (num % 1000) / 100;
	c = ((num % 1000) % 100) / 10;
	d = ((num % 1000) % 100) % 10;

	cout << d << "  " << c << "  " << b << "  " << a << endl;

	return 0; 
}
