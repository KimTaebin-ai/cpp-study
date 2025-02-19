/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:42:21 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 14:04:35 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
    const std::string pref[] = {
        DEBUG,
        INFO,
        WARNING,
        ERROR
    };

    int index = -1;

    for (int i = 0; i < 4; ++i) {
        if (pref[i] == level) {
            index = i;
            break;
        }
    }

    switch(index) {
        case 0:
            std::cout << "[ " << pref[index] << " ]" << std::endl;
            Harl::debug();
            break;
        case 1:
            std::cout << "[ " << pref[index] << " ]" << std::endl;
            Harl::info(); 
            break;
        case 2:
            std::cout << "[ " << pref[index] << " ]" << std::endl;
            Harl::warning(); 
            break;
        case 3:
            std::cout << "[ " << pref[index] << " ]" << std::endl;
            Harl::error(); 
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}