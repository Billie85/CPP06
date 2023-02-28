#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <stdint.h>

class conversion
{
private:
	std::string OriginStr;
public:
	int StringTochar(char *str);
	int StringToInt(char *str);
	int StringTofloat(char *str);
	int SringToDouble(char *str);

	conversion();
	~conversion();
};

#endif