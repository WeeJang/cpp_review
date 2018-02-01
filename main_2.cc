#include<iostream>
#include<string>
#include<limits>

typedef int feet;

enum color {red,green,blue};

#define WIDTH 5
const int LENGTH = 10;

void f();

void f()
{
	std::cout << "type: \t\t" << "fuck fuck" << std::endl;
}

int main()
{
	f();
	(f)();
	std::cout << WIDTH << "\t\t" << LENGTH << std::endl;
	std::cout << "type: \t\t" << "*******size*******" << std::endl;
	std::cout << "bool: \t\t" << "所占字节数:" << sizeof(bool);
	//std::cout << "\t min" << (std::numeric_limits<bool>::min)() << std::endl;
	std::cout << "\t min" << std::numeric_limits<bool>::min() << std::endl;
	color c = blue;
	std::cout << c << std::endl;	
	const int LENGTH_ = 10;
	std::cout << LENGTH_ << std::endl;
	return 0;
}
