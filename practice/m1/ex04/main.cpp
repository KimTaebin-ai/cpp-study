/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:20:55 by taebkim           #+#    #+#             */
/*   Updated: 2025/02/16 11:39:34 by taebkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void fileReplace(std::ifstream &ifs, std::ofstream &ofs, const std::string s1, const std::string s2) {
    std::string line;

    int s1_len = s1.length();
    int s2_len = s2.length();

     while (std::getline(ifs, line)) {
        size_t pos = 0;
        
        while (true) {
            pos = line.find(s1, pos);
            if (pos == std::string::npos) 
                break;
            line.erase(pos, s1_len);
            line.insert(pos, s2);
            pos += s2_len;
        }
        
        ofs << line << std::endl;
    }
}

void fileOpen(char *filename, std::string s1, std::string s2) {
    std::ifstream ifs;
    ifs.open(filename);

    if (!ifs.is_open()) {
        std::cerr << "Error: Failed to open input file: " << filename << std::endl;
        return ;
    }

    std::string outFilename = std::string(filename) + ".replace";
    std::ofstream ofs;
    ofs.open(outFilename.c_str());

    if (!ofs.is_open()) {
        std::cerr << "Error: Failed to create output file: " << outFilename << std::endl;
        ifs.close();
        return;
    }

    fileReplace(ifs, ofs, s1, s2);

    ifs.close();
    ofs.close();
}

int main(int argc, char **argv) {
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    if (argc == 4) {
        fileOpen(argv[1], argv[2], argv[3]);
    }

    return 0;
}
