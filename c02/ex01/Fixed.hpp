/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:54:34 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/12 08:40:02 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <math.h>

class Fixed {
private:
    int value;
    static const int fractionalBits;

public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    float toFloat() const;
    int toInt() const;

    friend std::ostream& operator<<(std::ostream& os, const Fixed& number);
};

#endif  // Fixed_H
