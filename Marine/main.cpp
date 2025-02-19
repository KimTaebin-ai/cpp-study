#include "Marine.hpp"

int main() {
    Marine* marines[100];

    marines[0] = new Marine(2, 3);
    marines[1] = new Marine(3, 4);

    marines[0]->show_status();
    marines[1]->show_status();
    std::cout << std::endl
              << "마린 1 이 마린 2 를 공격! " << std::endl;
    marines[1]->be_attacked(marines[0]->attack());
    marines[0]->show_status();
    marines[1]->show_status();
    delete marines[0];
    delete marines[1];

    return 0;
}