#include "PhotonCannon.hpp"

Photon_Cannon::Photon_Cannon(int x, int y) {
    std::cout << "생성자 호출 !" << std::endl;
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;
}

Photon_Cannon::Photon_Cannon(const Photon_Cannon &pc) {
    std::cout << "복사 생성자 호출 !" << std::endl;
    hp = pc.hp;
    shield = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    damage = pc.damage;
}

void Photon_Cannon::show_status() {
    std::cout << "Photon Cannon " << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
                << std::endl;

    std::cout << " HP : " << hp << std::endl;
}
