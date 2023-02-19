#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <string.h>

class conversion
{
private:
	std::string OriginStr;
public:
	int StringToChar();
	int StringToInt();
	int StringTofloat(char *arg);
	int SringToDouble();

	conversion();
	~conversion();
};

#endif