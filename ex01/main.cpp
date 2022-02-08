/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:20:01 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/08 13:27:25 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	print_string( std::string & a )
{
	std::cout << a;
}

void	print_integer( int & a )
{
	std::cout << "integer: " << a << std::endl;
}

int main( void )
{
	{
		int	tab[] = {1, 2, 3, 4, 5, 6};

		iter(tab, sizeof(tab) / sizeof(tab[0]), print_integer);
	}
	{
		std::string	tab[] = {"Hey !", " What's up ?", " Jean."};

		iter(tab, sizeof(tab) / sizeof(tab[0]), print_string);
		std::cout << std::endl;
	}
}
