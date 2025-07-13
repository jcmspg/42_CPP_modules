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

class Fixed
{
    public:
    
    Fixed(); // Default constructor
    Fixed(const Fixed &other); // Copy constructor
    Fixed &operator=(const Fixed &other); // Assignment operator
    ~Fixed(); // Destructor

    int getRawBits() const; // Returns the raw value of the fixed-point number
    void setRawBits(int raw); // Sets the raw value of the fixed-point number

    private:
    int                _fixedPointValue;
    static const int _fractionalBits = 8;
};

#endif // FIXED_HPP