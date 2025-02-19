#include "PhotonCannon.hpp"

int main() {
    Photon_Cannon pc1(3, 3);
    Photon_Cannon pc2(pc1);
    Photon_Cannon pc3 = pc2;
    pc1.show_status();
    pc2.show_status();

    return 0;
}