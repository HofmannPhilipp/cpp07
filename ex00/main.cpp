/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:21:04 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/11 10:18:41 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Swap" << std::endl;
    whatever::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << whatever::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << whatever::max(a, b) << std::endl;

    double x = 2.8;
    double y = 2.7;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "Swap" << std::endl;
    whatever::swap(x, y);
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "min( x, y ) = " << whatever::min(x, y) << std::endl;
    std::cout << "max( x, y ) = " << whatever::max(x, y) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "Swap" << std::endl;
    whatever::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << whatever::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << whatever::max(c, d) << std::endl;

    return 0;
}