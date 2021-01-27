#include <iostream>

using namespace std;

int main()
{
	int num1, num2, sum;
	cout << "Enter two integer: ";
	cin >> num1 >> num2;
	
	sum = num1 + num2;
	
	if ((num1 % 2) == 0)
		cout << num1 << " is even." << endl;	
	else
		cout << num1 << " is odd." << endl;
	
	if ((num2 % 2) == 0)
                cout << num2 << " is even." << endl;
        else
                cout << num2 << " is odd." << endl;

        if ((sum % 2) == 0)
                cout << sum << " is even." << endl;
        else
                cout << sum << " is odd." << endl;

	return 0;
}
