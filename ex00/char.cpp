#include "conversion.hpp"

int Normalchar(char *str)
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
			unsigned char number = static_cast<char>(atof(str));
			if (number < 32 || number > 127)
			 std::cout << "char: Non displayable" << std::endl;
			else
			std::cout << "char: " << "'" << number << "'"<<  std::endl;
			return 0;
		}
	}
	else if (str[i] == 'f' || str[i] == 'F')
	{
		i++;
		if (str[i] == '\0')
		{
			unsigned char number = static_cast<char>(atof(str));
			if (number < 32 || number > 127)
			 std::cout << "char: Non displayable" << std::endl;
			else
			std::cout << "char: " << "'" << number << "'"<<  std::endl;
			return 0;
		}
	}
	if (str[i] == '\0')
	{
		unsigned char number = static_cast<char>(atof(str));
		if (number < 32 || number > 127)
			 std::cout << "char: Non displayable" << std::endl;
			else
		std::cout << "char: " << "'" << number << "'"<<  std::endl;
		return 0;
	}
	std::cout << "ERROR!" << std::endl;
	return 1;
}

int StringTochar(char *str)
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
			unsigned char number = static_cast<char>(atof(str));
			if (number < 32 || number > 127)
			 std::cout << "char: Non displayable" << std::endl;
			else
			std::cout << "char: " << "'" << number << "'"<<  std::endl;
			return 0;
		}
	}
	else if (str[i] == 'f' || str[i] == 'F')
	{
		i++;
		if (str[i] == '\0')
		{
			unsigned char number = static_cast<char>(atof(str));
			if (number < 32 || number > 127)
			 std::cout << "char: Non displayable" << std::endl;
			else
			std::cout << "char: " << "'" << number << "'"<<  std::endl;
			return 0;
		}
	}
	if (str[i] == '\0')
	{
		unsigned char number = static_cast<char>(atof(str));
		if (number < 32 || number > 127)
			 std::cout << "char: Non displayable" << std::endl;
			else
		std::cout << "char: " << "'" << number << "'"<<  std::endl;
		return 0;
	}
	}
	else if (isdigit(str[i]))
	{
		int i = 0;
		i = Normalchar(str);
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