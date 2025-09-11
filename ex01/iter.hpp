/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:45:25 by phhofman          #+#    #+#             */
/*   Updated: 2025/09/11 10:39:14 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename Array, typename Length, typename Func>
void iter(Array &arr, Length len, Func f)
{
    for (Length i = 0; i < len; i++)
        f(arr[i]);
}