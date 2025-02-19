/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:02:22 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/17 16:28:25 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int fixedPoint;
        static const int fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &fixed);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        ~Fixed();    
};

#endif