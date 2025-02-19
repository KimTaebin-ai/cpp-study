/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 05:38:42 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 06:39:10 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int MAX_OF_ZOMBIE = 0;
    std::cout << "How many zombies? >> ";
    std::cin >> MAX_OF_ZOMBIE;

    Zombie *horde = zombieHorde(MAX_OF_ZOMBIE, "zombie");

    for (int i = 0; i < MAX_OF_ZOMBIE; i++) {
        horde[i].announce(i);
    }

    delete[] horde;

    return 0;
}