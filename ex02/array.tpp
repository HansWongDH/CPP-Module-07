/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:51:03 by wding-ha          #+#    #+#             */
/*   Updated: 2022/12/06 14:08:05 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"
#include <iostream>

using std::cout;
using std::endl;

template<class T> Array<T>::Array(void)
{
	this->_size = 0;
	cout << "Array class constructor called" << endl;
}

template<class T> Array<T>::~Array(void)
{
	cout << "Array class destructor called" << endl;
}

template<class T> Array<T>::Array(unsigned int size)
{
	this->_size = size;
	var = new T[size];
	for (int i = 0; i < size; i++)
		var[i] = 0; 
}

template<class T>unsigned int Array<T>::getSize(void)
{
	return (this->_size);
}

template<class T> Array<T>::Array(Array &a)
{
	this->_size = a.getSize();
	this->var = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		var[i] = a[i]; 
}

template<class T>
Array<T> Array<T>::operator=(Array &a)
{
	Array	var(a);
	return (var);
}

template<class T>
const char	*Array<T>::IndexOutofBound::what() const throw()
{
	return("Array::Index Out of bound");
}

template<class T>
T& Array<T>::operator[](int	n) const
{
	if (n >= this->_size)
		throw IndexOutofBound();
	return (this->var[n]);
}