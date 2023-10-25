/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:03 by pszleper          #+#    #+#             */
/*   Updated: 2023/10/25 14:20:41 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	std::cout << "Testing iter on array of integers" << std::endl;
	int int_arr[5] = {-42, -4, 0, 56, 4782};
	::iter(int_arr, 5, func);

	std::cout << "\nTesting iter on character array" << std::endl;
	char    char_arr[13] = "Hello World!";
	::iter(char_arr, 12, func);

	std::cout << "\nTesting iter on array of strings" << std::endl;
	std::string string_arr[5] = {"Hey", "how", "is", "the", "weather?"};
	::iter(string_arr, 5, func);

	return 0;
}
