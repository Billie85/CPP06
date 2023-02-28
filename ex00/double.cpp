#include "conversion.hpp"

int NormalDouble(char *str)
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
		if (str[i] == '\0' || str[i] == 'f' || str[i] == 'F')
		{
			double number = static_cast<double>(atof(str));
			std::cout.setf(std::ios::fixed);
			std::cout.precision(1);
			std::cout << "double: " <<number << std::endl;
			return 0;
		}
	}
	else if (str[i] == 'f' || str[i] == 'F')
	{
		i++;
		if (str[i] == '\0')
		{
			double number = static_cast<double>(atof(str));
			std::cout.setf(std::ios::fixed);
			std::cout.precision(1);
			std::cout << "double: " <<number << std::endl;
			return 0;
		}
	}
	if (str[i] == '\0')
	{
		double number = static_cast<double>(atof(str));
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "double: " <<number << std::endl;
		return 0;
	}
	std::cout << "ERROR!" << std::endl;
	return 1;
}

int SringToDouble(char *str)
{
	size_t i = 0;

	if(str[0] == '-' || str[0] == '+')
	{
		for (; str[i]; i++);

	if (str[i] == '.')
	{
		i++;
		for (; str[i]; i++);

		if (str[i] == '\0' || str[i] == 'f' || str[i] == 'F')
		{
			double number = static_cast<double>(atof(str));
			std::cout.setf(std::ios::fixed);
			std::cout.precision(1);
			std::cout << "double: " <<number << std::endl;
			return 0;
		}
	}
	else if (str[i] == 'f' || str[i] == 'F')
	{
		i++;
		if (str[i] == '\0')
		{
			double number = static_cast<double>(atof(str));
			std::cout.setf(std::ios::fixed);
			std::cout.precision(1);
			std::cout << "double: " <<number << std::endl;
			return 0;
		}
	}
	if (str[i] == '\0')
	{
		double number = static_cast<double>(atof(str));
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "double: " <<number << std::endl;
		return 0;
	}
	}
	else if (isdigit(str[i]))
	{
		size_t i = 0;
		i = NormalDouble(str);
		if (i == 1)
			return 1;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		return 1;
	}
	return 0;
}