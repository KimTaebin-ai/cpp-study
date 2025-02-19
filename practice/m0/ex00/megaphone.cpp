/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 21:28:17 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/17 19:06:33 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define NOISE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

void megaphone(char* str) {
    int i = 0;
    
    while (str[i]) {
        std::cout << static_cast<char>(toupper(str[i]));
        i++;
    }
}

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << NOISE;
    } else {
        for (int i = 1; i < argc; i++) {
            megaphone(argv[i]);
        }
    }
    
    std::cout << std::endl;
    return 0;
}
