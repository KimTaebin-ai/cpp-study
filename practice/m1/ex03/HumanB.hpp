/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 06:57:00 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 10:19:15 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *weapon;
    
    public:
        HumanB(std::string _name);
        ~HumanB();
        void setWeapon(Weapon &_weapon);
        void attack() const;
};

#endif