#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Input three different integers: ";
	cin >> num1 >> num2 >> num3;

	int sum, product;
	float average;

	sum = num1 + num2 + num3;
	product = num1 * num2 * num3;
	average = (float)sum / 3;

	cout << "Sum is " << sum << endl;
	cout << "Average is " << average << endl;
	cout << "Product is " << product << endl;

        if (num1 <= num2 && num1 <= num3)
                cout << "Smallest is " << num1 << endl;
        if (num2 <= num1 && num2 <= num3)
                cout << "Smallest is " << num2 << endl;
        if (num3 <= num1 && num3 <= num2)
                cout << "Smallest is " << num3 << endl;
	
	if (num1 >= num2 && num1 >= num3)
		cout << "Largest is " << num1 << endl;
        if (num2 >= num1 && num2 >= num3)
                cout << "Largest is " << num2 << endl;
        if (num3 >= num1 && num3 >= num2)
                cout << "Largest is " << num3 << endl;

	return 0;
}
