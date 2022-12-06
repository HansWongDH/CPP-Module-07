/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:14:40 by wding-ha          #+#    #+#             */
/*   Updated: 2022/12/06 14:08:06 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
using std::exception;

template <typename T>class Array {
    private:
        T       *var;
        unsigned int  _size;
    public:
        Array();
        ~Array();
        Array(unsigned int    size);
        Array   operator=(Array &a);
        Array(Array &a);
        unsigned int  getSize(void);
        T	&operator[](int n) const;
        class	IndexOutofBound : public exception
		{
				const char* what() const throw();
		};
};

#endif