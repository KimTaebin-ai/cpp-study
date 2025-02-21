#ifndef MARINE_HPP
# define MARINE_HPP

#include <iostream>

class Marine {
    private: 
        static int total_marine_num;
        int hp;               // 마린 체력
        int coord_x, coord_y; // 마린 위치
        bool is_dead;
        const int default_damage; // 기본 공격력

    public:
        Marine();             // 기본 생성자
        Marine(int x, int y); // x, y 좌표에 마린 생성
        Marine(int x, int y, int default_damage);
        int attack();                      // 데미지를 리턴한다.
        void be_attacked(int damage_earn); // 입는 데미지
        void move(int x, int y);           // 새로운 위치
        void show_status();                // 상태를 보여준다.
        ~Marine();
};

void create_marine();

#endif