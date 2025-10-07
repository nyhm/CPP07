#include <iostream>
#include "whatever.hpp"

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
	std::cout << BOLD << CYAN << "=== EX00: Start with a few functions ===" << RESET << std::endl;
	std::cout << std::endl;
	
	// Test with integers
	int a = 2;
	int b = 3;
	
	std::cout << BOLD << YELLOW << "--- Integer Test ---" << RESET << std::endl;
	std::cout << "Before swap: " << RED << "a = " << a << RESET << ", " << BLUE << "b = " << b << RESET << std::endl;
	::swap(a, b);
	std::cout << "After swap:  " << RED << "a = " << a << RESET << ", " << BLUE << "b = " << b << RESET << std::endl;
	std::cout << "min(a, b) = " << GREEN << ::min(a, b) << RESET << std::endl;
	std::cout << "max(a, b) = " << GREEN << ::max(a, b) << RESET << std::endl;
	
	// Test with strings
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- String Test ---" << RESET << std::endl;
	std::cout << "Before swap: " << RED << "c = " << c << RESET << ", " << BLUE << "d = " << d << RESET << std::endl;
	::swap(c, d);
	std::cout << "After swap:  " << RED << "c = " << c << RESET << ", " << BLUE << "d = " << d << RESET << std::endl;
	std::cout << "min(c, d) = " << GREEN << ::min(c, d) << RESET << std::endl;
	std::cout << "max(c, d) = " << GREEN << ::max(c, d) << RESET << std::endl;
	
	// Test with equal values
	int e = 5;
	int f = 5;
	std::cout << std::endl;
	std::cout << BOLD << YELLOW << "--- Equal Values Test ---" << RESET << std::endl;
	std::cout << "Before swap: " << RED << "e = " << e << RESET << ", " << BLUE << "f = " << f << RESET << std::endl;
	::swap(e, f);
	std::cout << "After swap:  " << RED << "e = " << e << RESET << ", " << BLUE << "f = " << f << RESET << std::endl;
	std::cout << "min(5, 5) = " << GREEN << ::min(e, f) << RESET << MAGENTA << " (should be 5 - second parameter)" << RESET << std::endl;
	std::cout << "max(5, 5) = " << GREEN << ::max(e, f) << RESET << MAGENTA << " (should be 5 - second parameter)" << RESET << std::endl;
	
	std::cout << std::endl;
	std::cout << BOLD << GREEN << "✅ All tests completed successfully!" << RESET << std::endl;
	
	return 0;
}
