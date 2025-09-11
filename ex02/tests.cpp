/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:53:22 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/11 11:08:51 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void testFillIntArray()
{
    std::cout << "=== Test 1: Create and fill int array ===\n";
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); i++)
        intArr[i] = i + 1;

    std::cout << "intArr: ";
    iter(intArr, intArr.size(), printElement<int>);
    std::cout << "\n\n";
}

void testInvalidIndex()
{
    std::cout << "=== Test 2: Access with invalid index ===\n";
    Array<int> intArr(5);
    try
    {
        intArr[10] = 99;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << "\n";
    }
    std::cout << std::endl;
}

void testDeepCopy()
{
    std::cout << "=== Test 3: Check deep copy (assignment) ===\n";
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); i++)
        intArr[i] = i + 1;

    Array<int> copyArr(3);
    copyArr = intArr;

    std::cout << "copyArr after assignment: ";
    iter(copyArr, copyArr.size(), printElement<int>);
    std::cout << std::endl;
    copyArr[0] = 42;

    std::cout << "copyArr after modification: ";
    iter(copyArr, copyArr.size(), printElement<int>);
    std::cout << std::endl;
    std::cout << "intArr remains unchanged: ";
    iter(intArr, intArr.size(), printElement<int>);
    std::cout << "\n\n";
}

void testIterLambda()
{
    std::cout << "=== Test 4: iter with lambda ===\n";
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); i++)
        intArr[i] = i + 1;

    iter(intArr, intArr.size(), [](int x)
         { std::cout << "[" << x << "]"; });
    std::cout << "\n\n";
}

void testStringArray()
{
    std::cout << "=== Test 5: Array with strings ===\n";
    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "Template";
    strArr[2] = "World";

    std::cout << "strArr: ";
    iter(strArr, strArr.size(), printElement<std::string>);
    std::cout << "\n\n";
}

void testEmptyArray()
{
    std::cout << "=== Test 6: Empty array ===\n";
    Array<int> emptyArr(0);
    std::cout << "emptyArr size: " << emptyArr.size() << "\n";
    std::cout << "Iterating over emptyArr: ";
    iter(emptyArr, emptyArr.size(), [](int x)
         { std::cout << x << " "; });
    std::cout << std::endl;
    try
    {
        emptyArr[0] = 42;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception when accessing emptyArr: " << e.what() << "\n";
    }
    std::cout << std::endl;
}
