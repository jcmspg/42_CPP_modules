/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:30:29 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/13 18:30:29 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
    
    Fixed(); // Default constructor
    Fixed(const Fixed &other); // Copy constructor
    Fixed &operator=(const Fixed &other); // Assignment operator
    ~Fixed(); // Destructor

    //ex01
    Fixed(const int value); // Constructor from int
    Fixed(const float value); // Constructor from float

    float toFloat() const; // Converts fixed-point to float
    int toInt() const; // Converts fixed-point to int
    // end of ex01

    int getRawBits() const; // Returns the raw value of the fixed-point number
    void setRawBits(int raw); // Sets the raw value of the fixed-point number

    private:
    int                _fixedPointValue;
    static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed); // Overload << operator for Fixed

#endif // FIXED_HPP