#include "conversion.hpp"

int StringTofloat(char *str)
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
			float number = static_cast<float>(atof(str));
			std::cout.setf(std::ios::fixed);
			std::cout.precision(8);
			std::cout << "float: " <<number << "f" << std::endl;
			return 0;
		}
	}
	else if (str[i] == 'f' || str[i] == 'F')
	{
		i++;
		if (str[i] == '\0')
		{
			float number = static_cast<float>(atof(str));
			std::cout.setf(std::ios::fixed);
			std::cout.precision(8);
			std::cout << "float: " <<number << "f" << std::endl;
			return 0;
		}
	}
	if (str[i] == '\0')
	{
		float number = static_cast<float>(atof(str));
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "float: " <<number << "f" << std::endl;
		return 0;
	}
	std::cout << "ERROR!" << std::endl;
	return 1;
}
