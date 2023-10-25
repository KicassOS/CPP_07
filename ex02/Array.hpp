/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:20 by pszleper          #+#    #+#             */
/*   Updated: 2023/10/25 17:38:56 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <exception>
# include <ctime>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& other);
		Array&	operator=(const Array& other);
		~Array(void);

		T&				operator[](unsigned int index);
		T				operator[](unsigned int index) const;
		unsigned int	size(void) const;

		class OutOfBounds : public std::exception
		{
			const char* what() const throw();
		};

	private:
		unsigned int	_elementNum;
		T*				_arrPtr;
};

#include "Array.tpp"

#endif
