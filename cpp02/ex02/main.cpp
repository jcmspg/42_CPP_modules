/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/07/13 20:20:39 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/13 20:20:39 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


int	main(void)
{
	Fixed a;         // Default constructor (value 0)
	Fixed b(10);     // Int constructor (10)
	Fixed c(42.42f); // Float constructor (42.42)
	Fixed d(b);      // Copy constructor (copy of b)

	std::cout << "Initial values:\n";
	std::cout << "a = " << a.toFloat() << " (float)," << a.toInt() << " (int)\n";
	std::cout << "b = " << b.toFloat() << " (float)," << b.toInt() << " (int)\n";
	std::cout << "c = " << c.toFloat() << " (float), " << c.toInt() << " (int)\n";
	std::cout << "d = " << d.toFloat() << " (float), " << d.toInt() << " (int)\n\n";

	std::cout << "Testing assignment operator:\n";
	a = Fixed(1234.4321f);
	std::cout << "a = " << a.toFloat() << " (float), " << a.toInt() << " (int)\n\n";

	std::cout << "Testing comparison operators:\n";
	std::cout << "b > c ? " << (b > c) << "\n";
	std::cout << "b < c ? " << (b < c) << "\n";
	std::cout << "b >= d ? " << (b >= d) << "\n";
	std::cout << "b <= d ? " << (b <= d) << "\n";
	std::cout << "b == d ? " << (b == d) << "\n";
	std::cout << "b != c ? " << (b != c) << "\n\n";

	std::cout << "Testing arithmetic operators:\n";
	Fixed e = b + c;
	Fixed f = c - b;
	Fixed g = b * c;
	Fixed h = c / b;
	std::cout << "b + c = " << e.toFloat() << "\n";
	std::cout << "c - b = " << f.toFloat() << "\n";
	std::cout << "b * c = " << g.toFloat() << "\n";
	std::cout << "c / b = " << h.toFloat() << "\n\n";

	std::cout << "Testing increment/decrement operators:\n";
	Fixed i;
	std::cout << "i = " << i.toFloat() << "\n";
	std::cout << "++i = " << (++i).toFloat() << " (pre-increment)\n";
	std::cout << "i++ = " << (i++).toFloat() << " (post-increment)\n";
	std::cout << "i = " << i.toFloat() << "\n";
	std::cout << "--i = " << (--i).toFloat() << " (pre-decrement)\n";
	std::cout << "i-- = " << (i--).toFloat() << " (post-decrement)\n";
	std::cout << "i = " << i.toFloat() << "\n\n";

	std::cout << "Testing min and max static functions:\n";
	std::cout << "min(b, c) = " << Fixed::min(b, c).toFloat() << "\n";
	std::cout << "max(b, c) = " << Fixed::max(b, c).toFloat() << "\n";


    std::cout << "\n\n\n SECOND ROUND OF TESTS \n\n\n";
    
    Fixed sum = a + b;
    Fixed diff = a - b;
    Fixed prod = a * b;
    Fixed zero(0);

    std::cout << "Arithmetic operations:\n";
    std::cout << "a + b = " << sum << "\n";
    std::cout << "a - b = " << diff << "\n";
    std::cout << "a * b = " << prod << "\n";

    // Multiply and divide by zero
    Fixed mulZero = a * zero;
    std::cout << "a * 0 = " << mulZero << " (should be 0)\n";

    // Division
    Fixed div = a / b;
    std::cout << "a / b = " << div << "\n";

    std::cout << "\nComparison operators:\n";
    std::cout << "a > b: " << (a > b) << "\n";
    std::cout << "a < b: " << (a < b) << "\n";
    std::cout << "a >= c: " << (a >= c) << "\n";
    std::cout << "a <= c: " << (a <= c) << "\n";
    std::cout << "a == c: " << (a == c) << "\n";
    std::cout << "a != b: " << (a != b) << "\n";

    std::cout << "\nIncrement / decrement:\n";
    std::cout << "e = b + c = " << e.toFloat() << "\n";

    //set e to the value of pi
    e = Fixed(3.14159f); // Fixed value of pi for demonstration
    

    std::cout << "e = " << e << "\n";

    std::cout << "++e = " << ++e << " (pre-increment)\n";
    std::cout << "e = " << e << "\n";

    std::cout << "e++ = " << e++ << " (post-increment)\n";
    std::cout << "e = " << e << "\n";

    std::cout << "--e = " << --e << " (pre-decrement)\n";
    std::cout << "e = " << e << "\n";

    std::cout << "e-- = " << e-- << " (post-decrement)\n";
    std::cout << "e = " << e << "\n";

    std::cout << "\nTesting min and max static functions:\n";

    Fixed x(3);
    Fixed y(7);

    std::cout << "x = " << x << ", y = " << y << "\n";

    std::cout << "min(x, y) = " << Fixed::min(x, y) << "\n";
    std::cout << "max(x, y) = " << Fixed::max(x, y) << "\n";

    // const versions
    const Fixed cx(12);
    const Fixed cy(8);

    std::cout << "const cx = " << cx << ", const cy = " << cy << "\n";
    std::cout << "min(cx, cy) = " << Fixed::min(cx, cy) << "\n";
    std::cout << "max(cx, cy) = " << Fixed::max(cx, cy) << "\n";
    
	return (0);
}
