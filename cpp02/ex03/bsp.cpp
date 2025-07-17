/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cc                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:03:29 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/17 18:07:44 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <cmath>
#include "Fixed.hpp"


Fixed AreaFunction(Point const a, Point const b, Point const c) {
    return (a.getX() * (b.getY() - c.getY()) +
            b.getX() * (c.getY() - a.getY()) +
            c.getX() * (a.getY() - b.getY()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed areaABC = AreaFunction(a, b, c);
    Fixed areaPAB = AreaFunction(point, a, b);
    Fixed areaPBC = AreaFunction(point, b, c);
    Fixed areaPCA = AreaFunction(point, c, a);

    // Check if the point is inside the triangle
    return (areaABC == (areaPAB + areaPBC + areaPCA));
}
