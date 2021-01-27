#include <iostream>

int main()
{
	int num1, num2;

	std::cout << "Please Enter two numbers: ";
	std::cin >> num1 >> num2;

	int sum, product, difference;
	double quotient;

	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	quotient = (double)num1 / num2;

	std::cout << " Sum is: " << sum << std::endl;
        std::cout << " Product is: " << product << std::endl;
        std::cout << " Difference is: " << difference << std::endl;
        std::cout << " Quotient is: " << quotient << std::endl;
	
	return 0;
}
