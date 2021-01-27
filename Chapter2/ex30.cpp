#include <iostream>

using namespace std;

int main()
{
	double kg, m;

	cout << "Enter weight in kilograms: ";
	cin >> kg;
	cout << "Enter height in meters: ";
	cin >> m;

	double bmi = kg / (m*m);
	
	if (bmi < 18.5){
		cout << "Underweight" << endl;
	}

        else if (18.5 <= bmi <=24.9){
                cout << "Normal" << endl;
        }

        else if (25 <= bmi <= 29.9){
                cout << "Overweight" << endl;
        }

        else if (bmi >= 30){
                cout << "Obese" << endl;
        }

	return 0;
}
