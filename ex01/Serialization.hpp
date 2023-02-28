#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <inttypes.h> 
struct Data
{
	int x;
	double y;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif