#include <iostream>

using namespace std;

int main()
{
	double tot_miles, cost_per_gal, av_mile_per_gal, fee, toll;
	
	cout << "Enter total miles driven per day: ";
	cin >> tot_miles;
	cout << "Enter cost per gallon of gasoline: ";
	cin >> cost_per_gal;
	cout << "Enter average miles per gallon: ";
	cin >> av_mile_per_gal;
	cout << "Enter parking fees per day: ";
	cin >> fee;
	cout << "Enter tolls per day: ";
	cin >> toll;

	double cost = (tot_miles / av_mile_per_gal) * cost_per_gal + fee + toll;
	cout << "Cost per day: " << cost << endl;

	return 0;
}
