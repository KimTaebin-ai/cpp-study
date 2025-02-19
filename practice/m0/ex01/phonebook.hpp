/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:36:01 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/17 19:34:27 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

#define MAX_OF_CONTACTS 8
#define MAX_OF_TEXT_LENGTH 10

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phone;
        std::string secret;
        
    public:
        Contact();
        ~Contact();

        void setFirstName(const std::string &arg);
        void setLastName(const std::string &arg);
        void setNickName(const std::string &arg);
        void setPhone(const std::string &arg);
        void setSecret(const std::string &arg);
        
        void display() const;
};

class PhoneBook {
    private:
        Contact _contacts[8];
        int current_idx;
    public:
        PhoneBook();
        
        void add_contact();
        void search_contact();
};

#endif