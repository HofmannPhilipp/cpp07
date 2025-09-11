/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:38:40 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/11 11:06:20 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>

template <typename T>
class Array
{
private:
    T *_arr;
    unsigned int _n;

public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array &other);
    const Array &operator=(const Array &other);
    T &operator[](unsigned int i);
    const T &operator[](unsigned int i) const;
    unsigned int size() const;
};

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