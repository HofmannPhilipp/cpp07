/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:21:53 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/11 10:12:26 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace whatever
{

    template <typename T>
    void swap(T &a, T &b)
    {
        T temp = a;

        a = b;
        b = temp;
    }

    template <typename T>
    const T &min(const T &a, const T &b)
    {
        if (a < b)
            return a;
        return b;
    }

    template <typename T>
    const T &max(const T &a, const T &b)
    {
        if (a > b)
            return a;
        return b;
    }
}