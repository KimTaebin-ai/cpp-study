/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 06:56:20 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 10:19:06 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {
}

Weapon::~Weapon() {}

const std::string Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string type) {
    this->type = type;
}