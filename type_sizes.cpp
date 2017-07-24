#include <iostream>

//prints the sizes of some of the common types in bits.
int main()
{
	std::cout << "char: " << sizeof(char)*8 << " bits." << std::endl;
	std::cout << "short: " << sizeof(short)*8 << " bits." << std::endl;
	std::cout << "int: " << sizeof(int)*8 << " bits." << std::endl;
	std::cout << "long: " << sizeof(long)*8 << " bits." << std::endl;
	std::cout << "long long: " << sizeof(long long)*8 << " bits." << std::endl;
	std::cout << "float: " << sizeof(float)*8 << " bits." << std::endl;
	std::cout << "double: " << sizeof(double)*8 << " bits." << std::endl;
	std::cout << "long double: " << sizeof(long double)*8 << " bits." << std::endl;
	return 0;
}

