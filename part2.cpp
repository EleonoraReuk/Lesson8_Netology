#include <iostream>

namespace Math
{
	int sum(int x, int y)
	{
		return x + y;
	}
	int sub(int x, int y)
	{
		return x - y;
	}
	int mult(int x, int y)
	{
		return x * y;
	}
	int div(int x, int y)
	{
		return x / y;
	}
}

int main()
{
	double variable1{ 6 };
	double variable2{ 9 };

	std::cout << "x = " << variable1 << ", y = " << variable2 << std::endl;
	std::cout << "Сложение: " << Math::sum(variable1, variable2) << std::endl;
	std::cout << "Вычитание: " << Math::sub(variable1, variable2) << std::endl;
	std::cout << "Умножение: " << Math::mult(variable1, variable2) << std::endl;
	std::cout << "Деление: " << Math::div(variable1, variable2) << std::endl;

	return EXIT_SUCCESS;
}