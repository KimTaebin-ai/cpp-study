/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:40:18 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/17 22:40:27 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name) {
    name = _name;
}

Zombie::~Zombie() {
    std::cout << name << "is destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}