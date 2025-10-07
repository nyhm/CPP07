#include <iostream>
#include "iter.hpp"

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

// Function templates for testing

template<typename T>
void printElement(const T &element)
{
	std::cout << element << " ";
}

template<typename T>
void multiplyByTwo(T &element)
{
	element *= 2;
}

template<typename T>
void addOne(T &element)
{
	element += 1;
}

int main()
{
	std::cout << BOLD << CYAN << "=== EX01: Iter ===" << RESET << std::endl;
	std::cout << std::endl;
	
	// Test with integers
	std::cout << BOLD << YELLOW << "--- Integer Array Test ---" << RESET << std::endl;
	int intArray[] = {0, 1, 2, 3, 4};
	size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
	
	std::cout << "Original array: ";
	iter(intArray, intLength, &printElement<int>);
	std::cout << std::endl;
	
	std::cout << "After adding 1: ";
	iter(intArray, intLength, &addOne<int>);
	iter(intArray, intLength, &printElement<int>);
	std::cout << std::endl;
	
	std::cout << "After multiplying by 2: ";
	iter(intArray, intLength, &multiplyByTwo<int>);
	iter(intArray, intLength, &printElement<int>);
	std::cout << std::endl;
	
	// Test with const integers
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Const Integer Array Test ---" << RESET << std::endl;
	const int constIntArray[] = {42, 42, 42, 42, 42};
	size_t constIntLength = sizeof(constIntArray) / sizeof(constIntArray[0]);
	
	std::cout << "Const array: ";
	iter(constIntArray, constIntLength, &printElement<int>);
	std::cout << std::endl;
	
	// Test with strings
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- String Array Test ---" << RESET << std::endl;
	std::string stringArray[] = {"Hey", "I", "am", "hnagashi"};
	size_t stringLength = sizeof(stringArray) / sizeof(stringArray[0]);
	
	std::cout << "String array: ";
	iter(stringArray, stringLength, &printElement<std::string>);
	std::cout << std::endl;
	
	// Test with chars
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Char Array Test ---" << RESET << std::endl;
	char charArray[] = {'A', 'B', 'C', 'D', 'E'};
	size_t charLength = sizeof(charArray) / sizeof(charArray[0]);
	
	std::cout << "Char array: ";
	iter(charArray, charLength, &printElement<char>);
	std::cout << std::endl;
	
	// Test with floats
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Float Array Test ---" << RESET << std::endl;
	float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	size_t floatLength = sizeof(floatArray) / sizeof(floatArray[0]);
	
	std::cout << "Original float array: ";
	iter(floatArray, floatLength, &printElement<float>);
	std::cout << std::endl;
	
	std::cout << "After adding 1: ";
	iter(floatArray, floatLength, &addOne<float>);
	iter(floatArray, floatLength, &printElement<float>);
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << BOLD << GREEN << "✅ All iter tests completed successfully!" << RESET << std::endl;
	
	return 0;
}
