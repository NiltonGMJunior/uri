#include <iostream>
#include <iomanip>

int main(const int argc, const char* argv[])
{
	float salary;
	std::cin >> salary;

	float taxes = 0;
	
	if (salary > 4500.00)
	{
		taxes += (salary - 4500.00) * 0.28;
		salary = 4500.00;
	}
	if (salary > 3000.00)
	{
		taxes += (salary - 3000.00) * 0.18;
		salary = 3000.00;
	}
	if (salary > 2000.00)
	{
		taxes += (salary - 2000.00) * 0.08;
		salary = 2000.00;
	}

	if (taxes == 0.0)
		std::cout << "Isento" << '\n';
	else
		std::cout << "R$ " << std::fixed << std::setprecision(2) << taxes << '\n';

	return 0;
}
