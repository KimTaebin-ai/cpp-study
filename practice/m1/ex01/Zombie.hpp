/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 05:39:08 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 07:02:46 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);
        void announce(int i);
};

Zombie* zombieHorde( int N, std::string name );

#endif