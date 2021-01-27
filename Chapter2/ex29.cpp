#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;

	cout << "Face length\t\tSurface area\t\tVolume\n";
	cout << "of cube (cm)\t\tof cube (cm^2)\t\tof cube(cm^3)\n\n";
	cout << a << "\t\t\t" << 6*a*a << "\t\t\t" << a*a*a << endl;
        cout << b << "\t\t\t" << 6*b*b << "\t\t\t" << b*b*b << endl;
        cout << c << "\t\t\t" << 6*c*c << "\t\t\t" << c*c*c << endl;
        cout << d << "\t\t\t" << 6*d*d << "\t\t\t" << d*d*d << endl;
	cout << e << "\t\t\t" << 6*e*e << "\t\t\t" << e*e*e << endl;
	return 0;
}
