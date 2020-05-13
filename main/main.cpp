#include <iostream>
#include "../rtAudio/RtAudio.h"

int main() {
    RtAudio rtAudio;
    int i = 0;

    for(i = 0; i < 100; i++) {
        std::cout<<i;
        std::cout<<std::endl;
    }

    return 0;
}