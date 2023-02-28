#include "Base.hpp"

Base::~Base()
{
	;
}

Base *generate(void)
{
	int result = rand() % 3;
	switch (result)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default :
			return(NULL);
	}
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
	{
		std::cout << "->" << dynamic_cast<A*>(p) << std::endl;
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "->" << dynamic_cast<B*>(p) << std::endl;
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "->" << dynamic_cast<C*>(p) << std::endl;
		std::cout << "C" << std::endl;
	}
	else
		std::cout << "ERROR" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "->" << &a <<std::endl;
		std::cout << "A" << std::endl;
	}
	catch (...)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "->" << &b <<std::endl;
			std::cout << "B" << std::endl;
		}
		catch(...)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "->" << &c <<std::endl;
				std::cout << "C" << std::endl;
			}
			catch(...)
			{
				std::cout << "ERROR" << std::endl;
			}
		}
	}
}


int main() 
{
	std::cout << "==== identify result =====" << std::endl;
	Base *result = generate();
	std::cout << "->" << result << std::endl;
	identify(result);

	std::cout << std::endl;


	std::cout << "==== identify2 result =====" << std::endl;
	Base *result2 = generate();
	std::cout << "->" << result2 << std::endl;
	identify(*result2);
	return 0;
}
