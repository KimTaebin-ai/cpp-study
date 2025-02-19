/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 06:56:07 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 10:19:03 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
    private:
        std::string type;

    public:
        Weapon(std::string _type);
        ~Weapon();

        const std::string getType() const;
        void setType(const std::string type);
};

#endif