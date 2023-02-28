#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <inttypes.h> 

class Base
{
public:
	virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif