/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakita <eshakita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:11:45 by eshakita          #+#    #+#             */
/*   Updated: 2021/10/20 13:40:52 by eshakita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print_arr_element(T a)
{
    std::cout << "element - " << a << std::endl;
}

template <typename T>
void iter(T* a, int size, void (*print)(T const &foo))
{
    for(int i = 0; i < size; i++)
        print(a[i]);
}

#endif