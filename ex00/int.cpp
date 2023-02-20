#include "conversion.hpp"

int StringToInt(char *str)
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
			int number = static_cast<int>(atof(str));
			std::cout << "int: " <<number << std::endl;
			return 0;
		}
	}
	else if (str[i] == 'f' || str[i] == 'F')
	{
		i++;
		if (str[i] == '\0')
		{
			int number = static_cast<int>(atof(str));
			std::cout << "int: " <<number << std::endl;
			return 0;
		}
	}
	if (str[i] == '\0')
	{
		int number = static_cast<int>(atof(str));
		std::cout << "int: " <<number << std::endl;
		return 0;
	}
	std::cout << "ERROR!" << std::endl;
	return 1;
}
