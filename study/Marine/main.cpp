#include "Marine.hpp"

int main() {
    Marine marine1(2, 3, 5);
    marine1.show_status();
    Marine marine2(3, 5, 10);
    marine2.show_status();
    create_marine();
    std::cout << std::endl
              << "마린 1 이 마린 2 를 공격! " << std::endl;
    marine2.be_attacked(marine1.attack());
    marine1.show_status();
    marine2.show_status();

    return 0;
}