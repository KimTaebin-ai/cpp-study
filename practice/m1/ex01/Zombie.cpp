/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 05:41:20 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 06:38:34 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce(int n) {
    std::cout << name << n <<" : BraiiiiiiinnnzzzZ..." << std::endl;
}