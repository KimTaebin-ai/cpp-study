/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:54:09 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/17 22:40:10 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie stack_section("stack1");
    Zombie *heap_section = newZombie("heap");
    
    stack_section.announce();
    heap_section->announce();

    delete heap_section;

    randomChump("stack2");

    return 0;
}