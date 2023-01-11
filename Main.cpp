#include"fraction.h"
#include<iostream>

int main()
{
	while (true)
	{
		Fraction f1;
		std::cin >> f1.numerator;
		std::cin >> f1.denominator;
		Fraction f2;
		std::cin >> f2.numerator;
		std::cin >> f2.denominator;
		std::cout << "operator:";
		char op;
		std::cin >> op;
		if (op == '+')
		{
			Fraction f3 = f2 + f1;
			std::cout << f3.numerator << "/" << f3.denominator;
		}
		else if (op == '-')
		{
			Fraction f3 = f2 - f1;
			std::cout << f3.numerator << "/" << f3.denominator;
		}
		else if (op == '*')
		{
			Fraction f3 = f2 * f1;
			std::cout << f3.numerator << "/" << f3.denominator;
		}
		else if (op == '/')
		{
			Fraction f3 = f2 / f1;
			std::cout << f3.numerator << "/" << f3.denominator;
		}
	}
	return 0;
}