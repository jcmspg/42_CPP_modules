/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:44:53 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/18 18:06:21 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class Point {
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(const float x, const float y);

        Point(const Point &other);
        Point &operator=(const Point &other);

        bool operator==(const Point &other) const;
        
        static Fixed triArea(const Point &a, const Point &b, const Point &c);
        
        ~Point();

        Fixed getX() const;
        Fixed getY() const;

};

#endif // POINT_HPP
