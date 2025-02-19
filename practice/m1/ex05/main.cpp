/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:42:04 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 13:39:41 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    harl.complain(DEBUG);
    harl.complain(INFO);
    harl.complain(WARNING);
    harl.complain(ERROR);
    return 0;
}