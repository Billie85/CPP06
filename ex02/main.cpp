#include "Base.hpp"
#include "classABC.hpp"
#include  <unistd.h>

Base *generate(void)
{
	int i;
	i = rand() % 3;
	if (i == 0)
	{
		std::cout << "A" << std::endl;
		return (new A());
	}
	else if (i == 1)
	{
		std::cout << "B" << std::endl;
		return (new B());
	}
	std::cout << "C" << std::endl;
	return(new C());
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))//キャストできた時。
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
			}
			catch(const std::exception& e)
			{
				std::cout << "ANOTHER ERROR" << std::endl;
				return ;
			}
			std::cout << "C" << std::endl;
			return ;
			
		}
			std::cout << "B" << std::endl;
			return ;
		
	}
	std::cout << "A" << std::endl;
	return ;
}

Base *generate(void);
void identify(Base& p);
void identify(Base *p);

int main(void)
{
	while (1)
	{
		Base *b = generate();
		//std::cout << b << std::endl;
		identify(b);
		identify(*b);
		delete(b);
		sleep(1);
		std::cout << "=======" << std::endl;
	}
}