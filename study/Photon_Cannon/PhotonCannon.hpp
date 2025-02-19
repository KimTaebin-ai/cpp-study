#ifndef PHOTON_CANNON_HPP
# define PHOTON_CANNON_HPP

#include <iostream>
#include <string>

class Photon_Cannon {
    private: 
        int hp, shield;
        int coord_x, coord_y;
        int damage;

    public:
        Photon_Cannon(int x, int y);
        Photon_Cannon(const Photon_Cannon &pc);
        void show_status();
};

#endif