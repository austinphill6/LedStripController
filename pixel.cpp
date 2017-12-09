#include "pixel.h"

Pixel::Pixel(unsigned char R, unsigned char G, unsigned char B) {
    this->R = R;
    this->G = G;
    this->B = B;
}

unsigned char Pixel::GetR() const{
    return R;
}

unsigned char Pixel::GetG() const{
    return G;
}

unsigned char Pixel::GetB() const{
    return B;
}
