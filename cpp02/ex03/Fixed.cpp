/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:32:07 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/15 21:12:35 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _fixedPointValue(other._fixedPointValue) {
    //std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;
    }
    return *this;
}

int Fixed::getRawBits() const {
    //std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawBits(int raw) {
    //std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = raw;
}

// Additional methods for ex01
Fixed::Fixed(const int value) : _fixedPointValue(value << _fractionalBits) {
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _fixedPointValue(static_cast<int>(value * (1 << _fractionalBits) + (value >= 0 ? 0.5f : -0.5f))) {
    //std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const{
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt() const {
    return _fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat(); 
    return os;
}


// overload operators for ex02

bool Fixed::operator>(const Fixed &other) const {
    return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const {
    return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const {
    return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const {
    return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const {
    return (this->getRawBits() == other.getRawBits());
}


bool Fixed::operator!=(const Fixed &other) const {
    return ((this->getRawBits() != other.getRawBits()));
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.setRawBits(this->getRawBits() + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.setRawBits(this->getRawBits() - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.setRawBits((this->getRawBits() * other.getRawBits()) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other.getRawBits() == 0) {
        std::cerr << "Division by zero" << std::endl;
        return Fixed(0); // or handle error appropriately
    }
    Fixed result;
    result.setRawBits((this->getRawBits() << _fractionalBits) / other.getRawBits());
    return result;
} 

Fixed &Fixed::operator++() {
    _fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _fixedPointValue++;
    return temp;
}

Fixed &Fixed::operator--() {
    _fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _fixedPointValue--;
    return temp;
}

// min and max functions
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}
