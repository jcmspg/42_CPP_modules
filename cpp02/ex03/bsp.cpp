/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:03:29 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/18 18:20:26 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"
#include "Point.hpp"
#include "Fixed.hpp"



static Fixed triArea(const Point &a, const Point &b, const Point &c) {
    Fixed result = ((a.getX() - c.getX()) * (b.getY() - c.getY())) - ((a.getY() - c.getY()) * (b.getX() - c.getX()));
    if (result < Fixed(0)) {
        result = result * Fixed(-1); // Ensure the area is non-negative
    }
    return result / Fixed(2); // Divide by 2 to get the actual area of the triangle
}


bool bsp(Point const &a, Point const &b, Point const &c, Point const &point) {
    Fixed areaABC = triArea(a, b, c);
    Fixed areaPAB = triArea(point, a, b);
    Fixed areaPBC = triArea(point, b, c);
    Fixed areaPCA = triArea(point, c, a);

    // Calculate the area of the triangle ABC and the areas of the triangles PAB, PBC, and PCA
    // If the point is inside the triangle, the sum of the areas of PAB, PBC, and PCA should equal the area of ABC


    Fixed areaSum = areaPAB + areaPBC + areaPCA;
    Fixed areaDiff = areaABC - areaSum;

    if (areaDiff < Fixed(0)) {
        areaDiff = areaDiff * Fixed(-1); // Ensure the difference is non-negative
    }
    
    float precision = 1.0f / (1<<8); // Define a small epsilon for floating-point comparison
    return areaDiff < Fixed(precision); // Use a small epsilon to account for floating-point precision issues

}
