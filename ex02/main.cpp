/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:36:00 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/11 11:08:57 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "tests.hpp"
#include <iostream>

int main(void)
{
    testFillIntArray();
    testInvalidIndex();
    testDeepCopy();
    testIterLambda();
    testStringArray();
    testEmptyArray();
    return 0;
}