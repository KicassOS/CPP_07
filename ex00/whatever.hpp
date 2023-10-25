/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:54 by pszleper          #+#    #+#             */
/*   Updated: 2023/10/25 14:04:53 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void 	swap(T& a, T& b)
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T& a, T& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	max(T& a, T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif