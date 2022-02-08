/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:29:31 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/08 14:06:20 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T = int >
class Array
{

private:

	int	_size;
	T *		_array;

public:

	Array< T >( void ) : _size(0), _array(NULL) {}
	Array< T >( const unsigned int n ) : _size(n), _array(new T[n]) {}
	Array< T >( Array const & src )
	{
		this->_size = src.size();
		this->_array = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
	}
	Array &	operator=( Array< T > const & rhs )
	{
		if (this != &rhs)
		{
			if (this->_size > 0)
				delete [] this->_array;
			this->_size = rhs.size();
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = rhs[i];
		}

		return *this;
	}
	T &	operator[]( int i )
	{
		if (i < 0 || i >= this->_size)
			throw std::out_of_range("unaccessible token");
		return this->_array[i];
	}
	virtual ~Array< T >( void )
	{
		if (this->_size > 0)
			delete [] this->_array;
	}

	int	size( void ) const { return this->_size; }

};

#endif /* ARRAY_HPP */
