#include <iostream>

//prints the sizes of some of the common types in bytes.
int main()
{
	std::cout << "char: " << sizeof(char) << " bytes." << std::endl;
	std::cout << "short: " << sizeof(short) << " bytes." << std::endl;
	std::cout << "int: " << sizeof(int) << " bytes." << std::endl;
	std::cout << "long: " << sizeof(long) << " bytes." << std::endl;
	std::cout << "long long: " << sizeof(long long) << " bytes." << std::endl;
	std::cout << "float: " << sizeof(float) << " bytes." << std::endl;
	std::cout << "double: " << sizeof(double) << " bytes." << std::endl;
	std::cout << "long double: " << sizeof(long double) << " bytes." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	int int_array[] = {1,2,3};
        long long_array[] ={1l, 2l, 3l};

	// int_array == &int_array == &int_array[0]
	// [] has higher precedence than &
	
	std::cout << "int_array: " << int_array << std::endl;
	std::cout << "&int_array: " << &int_array << std::endl;
	std::cout << "&int_array[0]: " << &int_array[0] << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	int *int_array_ptr = int_array;  
	std::cout << "int_array_ptr: " << int_array_ptr << std::endl;
	std::cout << "++int_array_ptr: " << ++int_array_ptr << std::endl;
	std::cout << std::endl;

	long *long_array_ptr = long_array;
	std::cout << "long_array_ptr: " << long_array_ptr << std::endl;
	std::cout << "++long_array_ptr: " << ++long_array_ptr << std::endl;
	std::cout << std::endl;
	
	return 0;
}

