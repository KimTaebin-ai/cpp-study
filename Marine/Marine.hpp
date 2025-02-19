#ifndef MARINE_HPP
# define MARINE_HPP

#include <iostream>

class Marine {
    private:
        int hp; // 체력
        int coord_x, coord_y;
        int damage;
        bool is_dead;

    public:
        Marine();             // 기본생성자
        Marine(int x, int y); // x,y 좌표에 마린 생성

        int attack();                      // 데미지 리턴
        void be_attacked(int damage_earn); // 입는 데미지
        void move(int x, int y);           // 새로운 위치

        void show_status(); // 상태값 확인
};

#endif