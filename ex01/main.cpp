/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:21:04 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/11 10:40:38 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void printElement(T const &x)
{
    std::cout << x << " ";
}

template <typename T>
void incrementElement(T &x)
{
    ++x;
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    iter(arr, 5, [](int x)
         { std::cout << x << std::endl; });

    iter(arr, 5, incrementElement<int>);
    iter(arr, 5, printElement<int>);

    return 0;
}