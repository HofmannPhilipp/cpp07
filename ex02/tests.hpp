/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:55:59 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/11 11:09:03 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"
#include <string>
#include <iostream>

void testFillIntArray();
void testInvalidIndex();
void testDeepCopy();
void testIterLambda();
void testStringArray();
void testEmptyArray();

template <typename T>
void printElement(const T &x)
{
    std::cout << x << " ";
}

template <typename Array, typename Length, typename Func>
void iter(Array arr, Length len, Func f)
{
    for (Length i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T>
void incrementElement(T &x)
{
    ++x;
}