#include <iostream>
#include "Array.hpp"

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"

int main()
{
	std::cout << BOLD << CYAN << "=== EX02: Array ===" << RESET << std::endl;
	std::cout << std::endl;

	// Test default constructor
	std::cout << BOLD << YELLOW << "--- Default Constructor Test ---" << RESET << std::endl;
	Array<int> emptyArray;
	std::cout << "Empty array size: " << GREEN << emptyArray.size() << RESET << std::endl;

	// Test constructor with size
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Constructor with Size Test ---" << RESET << std::endl;
	Array<int> intArray(5);
	std::cout << "Array size: " << GREEN << intArray.size() << RESET << std::endl;

	// Test element access and assignment
	std::cout << "Setting values: ";
	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		intArray[i] = i * 10;
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	// Test reading values
	std::cout << "Reading values: ";
	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	// Test copy constructor
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Copy Constructor Test ---" << RESET << std::endl;
	Array<int> copiedArray(intArray);
	std::cout << "Copied array values: ";
	for (unsigned int i = 0; i < copiedArray.size(); i++)
	{
		std::cout << copiedArray[i] << " ";
	}
	std::cout << std::endl;

	// Test assignment operator
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Assignment Operator Test ---" << RESET << std::endl;
	Array<int> assignedArray;
	assignedArray = intArray;
	std::cout << "Assigned array values: ";
	for (unsigned int i = 0; i < assignedArray.size(); i++)
	{
		std::cout << assignedArray[i] << " ";
	}
	std::cout << std::endl;

	// Test deep copy (modify original, check copy is unaffected)
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Deep Copy Test ---" << RESET << std::endl;
	intArray[0] = 999;
	std::cout << "Original array after modification: ";
	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Copied array (should be unchanged): ";
	for (unsigned int i = 0; i < copiedArray.size(); i++)
	{
		std::cout << copiedArray[i] << " ";
	}
	std::cout << std::endl;

	// Test exception handling
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Exception Test ---" << RESET << std::endl;
	try
	{
		std::cout << "Trying to access index -2: ";
		intArray[-2] = 0;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << "Exception caught for negative index!" << RESET << std::endl;
	}

	try
	{
		std::cout << "Trying to access index 10 (size is " << intArray.size() << "): ";
		intArray[10] = 0;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << "Exception caught for out-of-bounds index!" << RESET << std::endl;
	}

	// Test with different types
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- String Array Test ---" << RESET << std::endl;
	Array<std::string> stringArray(3);
	stringArray[0] = "Hello";
	stringArray[1] = "World";
	stringArray[2] = "C++";
	
	std::cout << "String array values: ";
	for (unsigned int i = 0; i < stringArray.size(); i++)
	{
		std::cout << stringArray[i] << " ";
	}
	std::cout << std::endl;

	// Test const array
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Const Array Test ---" << RESET << std::endl;
	const Array<int> constArray(intArray);
	std::cout << "Const array values (read-only): ";
	for (unsigned int i = 0; i < constArray.size(); i++)
	{
		std::cout << constArray[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Const array size: " << GREEN << constArray.size() << RESET << std::endl;

	std::cout << std::endl;
	std::cout << BOLD << GREEN << "✅ All Array tests completed successfully!" << RESET << std::endl;

	return 0;
}
