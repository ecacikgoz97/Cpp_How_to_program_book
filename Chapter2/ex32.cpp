#include <iostream>

inline double MAX(double x, double y) {return (x) > (y) ? (x) : (y);}
inline double MIN(double x, double y) {return (x) < (y) ? (x) : (y);}

using namespace std;

int main()
{
	double eq1, eq2, eq3, eq4;
	int age;

	cout << "Enter your age: ";
	cin >> age;

	eq1 = 220 - age;
	eq2 = 208 - 0.7*age;
	eq3 = 207 - 0.7*age;
	eq4 = 211 - 0.64*age;
	
	cout << "MHR range is btw " << MIN(eq1, MIN(eq2, MIN(eq3, eq4))) << " - " << MAX(eq1, MAX(eq2, MAX(eq3, eq4))) << endl;
	return 0;
}
