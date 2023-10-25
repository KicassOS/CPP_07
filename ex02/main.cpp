/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:12 by pszleper          #+#    #+#             */
/*   Updated: 2023/10/25 17:49:17 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>  int_arr(5);
	int_arr[0] = -42;
	int_arr[1] = -4;
	int_arr[2] = 0;
	int_arr[3] = 56;
	int_arr[4] = 4782;

	Array<char> char_arr(6);
	char_arr[0] = 'H';
	char_arr[1] = 'e';
	char_arr[2] = 'l';
	char_arr[3] = 'l';
	char_arr[4] = 'o';
	char_arr[5] = '\0';

	Array<std::string> string_arr(5);
	string_arr[0] = "Hey";
	string_arr[1] = "how";
	string_arr[2] = "is";
	string_arr[3] = "the";
	string_arr[4] = "weather?";

	std::cout << "Testing empty array" << std::endl;
	Array<int> emptyint_arr;
	std::cout << emptyint_arr.size() << std::endl;
	try
	{
		std::cout << "emptyint_arr[0] = " << emptyint_arr[0] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Testing operator[] and size()"<<std::endl;
	std::cout << "int_arr.size() = " << int_arr.size() << std::endl;
	std::cout << "char_arr.size() = " << char_arr.size() << std::endl;
	std::cout << "string_arr.size() = " << string_arr.size() << std::endl;

	std::cout<<"\nTesting if exception is thrown"<<std::endl;
	try
	{
		std::cout << "int_arr[5] = " << int_arr[5] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "int_arr[-1] = " << int_arr[-1] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTesting copy constructor"<<std::endl;
	Array<int>  copyIntArr(int_arr);
	std::cout << "           Old int_arr = ";
	for (unsigned int i = 0; i < int_arr.size(); ++i)
		std::cout << int_arr[i] << " ";
	std::cout << std::endl;
	std::cout << "New (copied) int array = ";
	for (unsigned int i = 0; i < copyIntArr.size(); ++i)
		std::cout << copyIntArr[i] << " ";
	std::cout << std::endl;

	std::cout << "\nTesting assignement constructor" << std::endl;
	Array<std::string> assigned_arr = string_arr;
	std::cout << "         Old string array = ";
	for (unsigned int i = 0; i < string_arr.size(); ++i)
		std::cout << string_arr[i] << " ";
	std::cout << std::endl;
	std::cout << "New (copied) string array = ";
	for (unsigned int i = 0; i < assigned_arr.size(); ++i)
		std::cout << assigned_arr[i] << " ";
	std::cout << std::endl;

	std::cout << "\nTesting default assignment operator" << std::endl;
	Array<int> defaultint_arr(6);
	for (unsigned int i = 0; i < 6; i++)
		std::cout << defaultint_arr[i] << " ";
	std::cout << std::endl;


	std::cout << "Testing const" << std::endl;
	Array<int> const_test(3);

	std::cout << const_test[1] << std::endl;
	// const_test[1] = 1337;
	std::cout << const_test[1] << std::endl;
	return 0;
}
