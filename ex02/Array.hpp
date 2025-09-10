/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:38:40 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/10 15:32:57 by phhofman         ###   ########.fr       */
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