/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:36:00 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/10 15:52:16 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>

template <typename Array, typename Length, typename Func>
void iter(Array arr, Length len, Func f)
{
    for (Length i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T>
void printElement(T const &x)
{
    std::cout << x << " ";
}

int main(void)
{
    std::cout << "=== Test 1: Create and fill int array ===\n";
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); i++)
        intArr[i] = i + 1;

    std::cout << "intArr: ";
    iter(intArr, intArr.size(), printElement<int>);
    std::cout << "\n\n";

    std::cout << "=== Test 2: Access with invalid index ===\n";
    try
    {
        intArr[10] = 99; // should throw
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << "\n";
    }
    std::cout << "\n";

    std::cout << "=== Test 3: Check deep copy (assignment) ===\n";
    Array<int> copyArr(3); // smaller array
    copyArr = intArr;      // Copy assignment
    std::cout << "copyArr after assignment: ";
    iter(copyArr, copyArr.size(), printElement<int>);
    std::cout << "\n";

    copyArr[0] = 42; // change only copyArr
    std::cout << "copyArr after modification: ";
    iter(copyArr, copyArr.size(), printElement<int>);
    std::cout << "\n";

    std::cout << "intArr remains unchanged: ";
    iter(intArr, intArr.size(), printElement<int>);
    std::cout << "\n\n";

    std::cout << "=== Test 4: iter with lambda ===\n";
    iter(intArr, intArr.size(), [](int x)
         { std::cout << "[" << x << "]"; });
    std::cout << "\n\n";

    std::cout << "=== Test 5: Array with strings ===\n";
    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "Template";
    strArr[2] = "World";

    std::cout << "strArr: ";
    iter(strArr, strArr.size(), printElement<std::string>);
    std::cout << std::endl;

    return 0;
}