#include "conversion.hpp"

int StringTofloat(char *str);
int checkFfloat(char *str);

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Error!" << std::endl;
        return 1;
    }
	int result =  StringTofloat(argv[1]);
	if (result == 1)
		return 1;
}