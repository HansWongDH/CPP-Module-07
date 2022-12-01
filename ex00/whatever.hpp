/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:27:54 by wding-ha          #+#    #+#             */
/*   Updated: 2022/12/01 18:50:19 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>void swap(T val1, T val2)
{
    T temp = val1;
    val1 = val2;
    val2 = temp;
}

template <typename T>T min(T val1, T val2)
{
   return ((val2 < val1) ? val2 : val1);
}

template <typename T>T max(T val1, T val2)
{
   return ((val2 > val1) ? val2 : val1);
}

#endif