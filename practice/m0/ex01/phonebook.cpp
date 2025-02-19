/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:35:52 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/17 19:46:57 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : current_idx(0) {}

void PhoneBook::add_contact() {
    std::string pref[] = {
        "First name: ",
        "Last name: ",
        "Nickname: ",
        "Phone number: ",
        "Darkest secret: ",
    };

    void (Contact::*setter[])(const std::string &arg) = {
        &Contact::setFirstName,
        &Contact::setLastName,
        &Contact::setNickName,
        &Contact::setPhone,
        &Contact::setSecret
    };

    for (int i = 0; i < 5; i++) {
        std::string temp;
        
        std::cout << "Enter " << pref[i];
        std::getline(std::cin, temp);
        
        (_contacts[current_idx % MAX_OF_CONTACTS].*setter[i])(temp);
    }
    
    current_idx++;
    std::cout << "Successfully entered" << std::endl;
}

void PhoneBook::search_contact() {
    if (current_idx == 0) {
        std::cout << "No contacts found!" << std::endl;
        return;
    }

    std::cout << std::right << std::setw(5) << "Id" << "|"
              << std::right << std::setw(10) << "First name" << "|" 
              << std::right << std::setw(10) << "Last name" << "|"
              << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << std::string(40, '-') << std::endl;

    for (int i = 0; i < std::min(current_idx, MAX_OF_CONTACTS); i++) {
        std::cout << std::setw(5) << i << "|";
        _contacts[i].display();
    }
}

void control_command() {
    PhoneBook phonebook;
    
    std::string command;

    while (1) {
        std::cout << "Please enter a command >> ";
        std::getline(std::cin, command);

        if (command == EXIT)
            break;
        else if (command == ADD) {
            phonebook.add_contact();
        } else if (command == SEARCH) {
            phonebook.search_contact();
        } else {
            std::cout << "Incorrect command!" << std::endl;
        }
    }
}

int main() {
    std::cout << "--- Phonebook Program ---" << std::endl;
    control_command();

    return 0;
}