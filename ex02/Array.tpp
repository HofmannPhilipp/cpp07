/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:32:23 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/10 15:33:00 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(new T[0]), _n(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _n(n)
{
}

template <typename T>
Array<T>::~Array()
{
    delete[] _arr;
}

template <typename T>
Array<T>::Array(const Array &other) : _arr(new T[other._n]), _n(other._n)
{
    for (unsigned int i = 0; i < other._n; i++)
    {
        _arr[i] = other._arr[i];
    }
}

template <typename T>
const Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return *this;
    delete[] _arr;
    _n = other._n;
    _arr = new T[_n];
    for (unsigned int i = 0; i < _n; i++)
    {
        _arr[i] = other._arr[i];
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= _n)
        throw std::out_of_range("Array index out of range");
    return _arr[i];
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
    if (i >= _n)
        throw std::out_of_range("Array index out of range");
    return _arr[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _n;
}