#include "Marine.hpp"

Marine::Marine() : hp(50), coord_x(0), coord_y(0), damage(5), is_dead(false) {}

Marine::Marine(int x, int y)
    : hp(50), coord_x(x), coord_y(y), damage(5), is_dead(false) {}

void Marine::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}

int Marine::attack() { return damage; }

void Marine::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp <= 0)
        is_dead = true;
}

void Marine::show_status() {
    std::cout << " *** Marine *** " << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "

              << std::endl;

    std::cout << " HP : " << hp << std::endl;
}