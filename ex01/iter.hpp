/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:00 by pszleper          #+#    #+#             */
/*   Updated: 2023/10/25 14:23:40 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(const T* arr, size_t length, void (*func_ptr)(const T&))
{
	for (size_t i = 0; i < length; ++i)
		func_ptr(arr[i]);
}

template <typename T>
void	iter(T* arr, size_t length, void (*func_ptr)(T&))
{
	for (size_t i = 0; i < length; ++i)
		func_ptr(arr[i]);
}

template <typename T>
void	func(T& element)
{
	static int index = 0;
	std::cout<<"arr["<<index<<"]= " << element << std::endl;
	index++;
}

#endif
