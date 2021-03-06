/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakita <eshakita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:00:57 by eshakita          #+#    #+#             */
/*   Updated: 2021/10/18 14:34:25 by eshakita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

/*
написать шаблоны функций:
1. swop - Меняет местами значения двух аргументов. Ничего не возвращает.
2. min - Сравнивает два аргумента и возвращает наименьший из них. Если два
аргумента равны, то он возвращает второй.
3. max - Сравнивает два аргумента и возвращает самый большой из них. Если два аргумента
равны, то он возвращает второй.

шаблоны должны быть определены в hpp.
написать мейн, шаблоны функций должны вызывать для любых типов аргументов,
при условии что оба аргумента одного типа и поддерживают все опереаторы сравнения

Шаблоны функций - это функции которые служат образцом для создания других подобных функций.
Например мы пишем функцию min и в зависимости он типа принимаемых аргументов и типа 
возвражаемого значения, там нужно будет делать перегрузку 
функции для каждого типа (int, float, double и тд).
Что бы упросить этот процесс, мы можем написать универсальный шаблон
*/

// output frow subject main
// a = 3, b = 2
// min(a, b) = 2
// max(a, b) = 3
// c = chaine2, d = chaine1
// min(c, d) = chaine1
// max(c, d) = chaine2

int main( void ) 
{
    //subject main:
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0; 
}
