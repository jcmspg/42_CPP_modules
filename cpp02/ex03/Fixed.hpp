/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/07/13 18:30:29 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/15 20:51:32 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  public:
	Fixed();                   // Default constructor
	Fixed(const Fixed &other); // Copy constructor
	~Fixed();                  // Destructor

	// ex01
	Fixed(const int value);   // Constructor from int
	Fixed(const float value); // Constructor from float

	float toFloat() const; // Converts fixed-point to float
	int toInt() const;     // Converts fixed-point to int
	// end of ex01

	// operator overloads
	Fixed &operator=(const Fixed &other); // Assignment operator

	// Comparison operators
	bool operator>(const Fixed &other) const;  // Greater than
	bool operator<(const Fixed &other) const;  // Less than
	bool operator>=(const Fixed &other) const; // Greater than or equal to
	bool operator<=(const Fixed &other) const; // Less than or equal to
	bool operator==(const Fixed &other) const; // Equal to
	bool operator!=(const Fixed &other) const; // Not equal to

	// Arithmetic operators
	Fixed operator+(const Fixed &other) const; // Addition
	Fixed operator-(const Fixed &other) const; // Subtraction
	Fixed operator*(const Fixed &other) const; // Multiplication
	Fixed operator/(const Fixed &other) const; // Division

	// Increment and Decrement operators
	Fixed &operator++();   // Pre-increment
	Fixed operator++(int); // Post-increment
	Fixed &operator--();   // Pre-decrement
	Fixed operator--(int); // Post-decrement

	// min max operators
	static Fixed &min(Fixed &a, Fixed &b);                  
		// Returns the minimum of two Fixed objects
	static const Fixed &min(const Fixed &a, const Fixed &b);
		// Returns the minimum of two const fixed objects

	static Fixed &max(Fixed &a, Fixed &b);                  
		// Returns the maximum of two Fixed objects
	static const Fixed &max(const Fixed &a, const Fixed &b);
		// Returns the maximum of two const fixed objects
																// they are static so they can be called without an instance of Fixed

	int getRawBits() const;  
		// Returns the raw value of the fixed-point number
	void setRawBits(int raw); // Sets the raw value of the fixed-point number

  private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
	// Overload << operator for Fixed

#endif // FIXED_HPP
