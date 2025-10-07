#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <ctime>

template<typename T>
class Array
{
private:
	T*				_array;
	unsigned int	_size;

public:
	// Default constructor - creates empty array
	Array() : _array(NULL), _size(0) {}

	// Constructor with size parameter
	Array(unsigned int n) : _size(n)
	{
		if (n == 0)
			_array = NULL;
		else
			_array = new T[n]();
	}

	// Copy constructor
	Array(const Array& other) : _size(other._size)
	{
		if (_size == 0)
		{
			_array = NULL;
		}
		else
		{
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
		}
	}

	// Assignment operator
	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			if (_array)
				delete[] _array;
			
			_size = other._size;
			if (_size == 0)
			{
				_array = NULL;
			}
			else
			{
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = other._array[i];
			}
		}
		return *this;
	}

	// Destructor
	~Array()
	{
		if (_array)
			delete[] _array;
	}

	// Subscript operator for non-const objects
	T& operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::out_of_range("Index out of bounds.");
		return _array[index];
	}

	// Subscript operator for const objects
	const T& operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::out_of_range("Index out of bounds.");
		return _array[index];
	}

	// Size function
	unsigned int size() const
	{
		return _size;
	}
};

#endif
