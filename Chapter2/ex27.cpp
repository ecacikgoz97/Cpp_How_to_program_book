#include <iostream>

using namespace std;

int main()
{
	char x;
	cout << "Enter a character: ";
	cin >> x;
	
	cout << static_cast<int>(x) << endl;

	return 0;
}
