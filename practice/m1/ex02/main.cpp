/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 06:40:20 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 06:54:40 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "The memory address of the string variable: " 
                << &string << std::endl;
    std::cout << "The memory address held by stringPTR: " 
                << &stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: "
                << &stringREF << std::endl;

    std::cout << "---------And then---------" << std::endl;

    std::cout << "The value of the string variable: " 
                << string << std::endl;
    std::cout << "The value pointed to by stringPTR: "
                << stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: "
                << stringREF << std::endl;

    return 0;
}