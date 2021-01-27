#include <iostream>
inline int MAX(int a, int b)   {return (a > b) ? a: b; }
using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter two integers: ";
	cin >> num1 >> num2;

	if (num1 == num2){
		cout << "These numbers are euqal." << endl;
	}
	else {
		cout << MAX(num1, num2) << " is larger." << endl;
	}
	return 0;
}
