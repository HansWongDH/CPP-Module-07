/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:36:43 by wding-ha          #+#    #+#             */
/*   Updated: 2022/12/01 18:52:40 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(void)
{
    cout << "pdf test" << endl << "==================" << endl;
    int a = 2;
    int b = 3;
    swap<int>(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    cout << "min( a, b ) = " << min<int>( a, b ) << endl;
    cout << "max( a, b ) = " << max<int>( a, b ) << endl;
    string c = "chaine1";
    string d = "chaine2";
    std::swap<string>(c, d);
    cout << "c = " << c << ", d = " << d << endl;
    cout << "min( c, d ) = " << std::min<string>( c, d ) << endl;
    cout << "max( c, d ) = " << std::max<string>( c, d ) << endl;
    
}