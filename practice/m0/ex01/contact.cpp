/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 00:55:38 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/17 19:48:13 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact() {

}

Contact::~Contact() {
    
}

std::string textOverflow(std::string str) {
    if (str.length() > MAX_OF_TEXT_LENGTH) {
        return str.substr(0, MAX_OF_TEXT_LENGTH - 1) + '.';
    } else return str;
}

void Contact::setFirstName(const std::string &firstName) {
    this->firstName = textOverflow(firstName);
}

void Contact::setLastName(const std::string &lastName) {
    this->lastName = textOverflow(lastName);
}

void Contact::setNickName(const std::string &nickName) {
    this->nickName = textOverflow(nickName);
}

void Contact::setPhone(const std::string &phone) {
    this->phone = textOverflow(phone);
}

void Contact::setSecret(const std::string &secret) {
    this->secret = textOverflow(secret);
}

void Contact::display() const {
    std::cout << std::setw(10) << firstName << "|"
              << std::setw(10) << lastName << "|"
              << std::setw(10) << nickName << "|" << std::endl;
    std::cout << std::string(40, '-') << std::endl;
}