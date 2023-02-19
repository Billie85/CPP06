#include "conversion.hpp"

int SringToDouble(char *str);
int StringTofloat(char *str);
int checkFfloat(char *str);

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Error!" << std::endl;
        return 1;
    }
	int result_float =  StringTofloat(argv[1]);
	if (result_float == 1)
		return 1;
	int result_double = SringToDouble(argv[1]);
	if (result_double == 1)
		return 1;

}