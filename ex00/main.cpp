#include "conversion.hpp"
#include <iostream>

int StringToChar(char *str);
int SringToDouble(char *str);
int StringTofloat(char *str);
int StringToInt(char *str);


bool CheckInffNan(char *str)
{
    if (strcmp(str, "-inf") == 0)
    {
        std::cout << "char: impossible\n" <<
                     "int: impossible\n"  <<
                     "float: -inff\n"     <<
                     "double: -inf\n";
					 return true;
    }
	else if (strcmp(str, "+inf") == 0 || strcmp(str, "inf") == 0)
	{
		std::cout << "char: impossible\n"  << 
					  "int: impossible\n" <<
					  "float: inff\n"      <<
					  "double: inf\n";
					   return true;
	}
	else if (strcmp(str, "nan") == 0)
	{
		std::cout << "char: impossible\n" << 
				     "int: impossible\n" <<
                     "float: nanf\n"      <<
				     "double: nan\n";
					  return true;
	}
	return false;
}

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Error!" << std::endl;
        return 1;
    }
	if (CheckInffNan(argv[1]) == true)
		return 0;
	int result_char = StringToChar(argv[1]);
	if (result_char == 1)
		return 1;
	int result_int = StringToInt(argv[1]);
	if (result_int == 1)
		return 1;
	int result_float =  StringTofloat(argv[1]);
	if (result_float == 1)
		return 1;
	int result_double = SringToDouble(argv[1]);
	if (result_double == 1)
		return 1;
}