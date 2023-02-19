#include "conversion.hpp"

int SringToDouble(char *str)
{
	size_t i = 0;

	if (isdigit(str[i]) == false)
	{
		std::cout << "ERROR!" << std::endl;
		return 1;
	}
	for (; isdigit(str[i]); i++);
	if (str[i] == '.')
	{
		i++;
		if (isdigit(str[i]) == false)
		{
			std::cout << "ERROR!" << std::endl;
			return 1;
		}
		for (; isdigit(str[i]); i++);
		if (str[i] == '\0')
		{
			double number = static_cast<double>(atof(str));
			std::cout.setf(std::ios::fixed);
			std::cout.precision(15);
			std::cout << "double: " << number << std::endl;
			return 0;
		}
	}
	if (str[i] == '\0')
	{
		double number = static_cast<double>(atof(str));
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "double: " << number << std::endl;
		return 0;
	}
	std::cout << "ERROR!" << std::endl;
	return 1;
}
