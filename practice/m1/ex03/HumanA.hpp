/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 06:56:31 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 10:17:50 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon &weapon;
    
    public:
        HumanA(std::string _name, Weapon &weapon);
        ~HumanA();
        void attack();
};

#endif