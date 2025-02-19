/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 05:41:31 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 06:36:43 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *zombieList = new Zombie[N];

    for (int i = 0; i < std::min(N, 10); i++) {
        zombieList[i].setName(name);
    }

    return zombieList;
}