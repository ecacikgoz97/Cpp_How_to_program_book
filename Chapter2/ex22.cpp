#include <iostream>
inline int MAX(int a, int b) {return (a) > (b) ? (a) : (b); }
inline int MIN(int a, int b) {return (a) < (b) ? (a) : (b); }

using namespace std;

int main()
{
	int num1, num2, num3, num4, num5;

	cout << "Enter five integers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	cout << "Largest one is: " << MAX(num1, MAX(num2, MAX(num3, MAX(num4, num5)))) << endl;
	cout << "Smallest one is: " << MIN(num1, MIN(num2, MIN(num3, MIN(num4, num5)))) << endl;

	return 0;
}
