/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:31:59 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/18 18:12:58 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "bsp.hpp"

int main()
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    
    Point pointInside(1, 1);
    Point pointOutside(6, 6);

    if (bsp(a, b, c, pointInside)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    if (bsp(a, b, c, pointOutside)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    return 0;
}
