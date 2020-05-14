#include <iostream>
#include <RtAudio.h>

int main() {
    RtAudio *audio = 0;
    audio = new RtAudio;
    std::cout<<"Hello rtAudio"<<std::endl;
    delete audio;
    return 0;
}