/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 00:06:11 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/08 12:56:58 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap( T & a, T & b )
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T const &	max( T const & a, T const & b )
{
	return (a > b ? a : b);
}

template< typename T >
T const &	min( T const & a, T const & b )
{
	return (a < b ? a : b);
}

#endif /* WHATEVER_HPP */
