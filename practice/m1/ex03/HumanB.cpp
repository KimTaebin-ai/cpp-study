/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 06:57:11 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 10:19:25 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) {
    name = _name;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &_weapon) {
    weapon = &_weapon;
}

void HumanB::attack() const {
    std::cout << name << " attacks with their " 
                << weapon->getType() << std::endl;
}
