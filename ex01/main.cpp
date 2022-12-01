/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:07:15 by wding-ha          #+#    #+#             */
/*   Updated: 2022/12/01 20:59:20 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

void    print(string &str)
{
    cout << str << endl;
}
int main(void)
{
    int arr[] = {5, 4, 3 , 2 , 1};
    string  sarr[] ={"hello", "world", "lmao", "haha"};

    iter<string>(sarr, 4, print);
}