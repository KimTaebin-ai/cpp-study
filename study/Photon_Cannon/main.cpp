#include "PhotonCannon.hpp"

int main() {
    Photon_Cannon pc1(3, 3, "Cannon");
    Photon_Cannon pc2 = pc1;
    pc1.show_status();
    pc2.show_status();

    return 0;
}