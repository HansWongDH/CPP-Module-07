/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:07:15 by wding-ha          #+#    #+#             */
/*   Updated: 2022/12/02 13:50:25 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

template    <typename T>void printf(T &add)
{
     cout << add << endl;
}

int main(void)
{
    int arr[] = {5, 4, 3 , 2 , 1};
    string  sarr[] ={"hello", "world", "lmao", "haha"};

    iter<string>(sarr, 4, printf);
    iter<int>(arr, 4, printf);
}
