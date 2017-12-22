#include "pixel.h"
#include "functions.h"

int main() {
    const int pixelX = 1920;
    const int pixelY = 1080;
    const int ledX = 16;
    const int ledY = 10;
    const int blockX = pixelX / ledX;
    const int blockY = pixelY / ledY;
    unsigned char R = '-';
    unsigned char G = '-';
    unsigned char B = '-';
    Pixel *pixelPtrArray[ledX][ledY];
    Pixel *pixPtr = nullptr;

    for(unsigned int y = 0; y < ledY; y++) {
        for(unsigned int x = 0; x < ledX; x++) {
            GetPixel(R, G, B);
            if ((y < blockY)
                || (y > (pixelY - (1 + blockY))
                || (x < blockX)
                || (x > (pixelX - (1 + blockX))))) {
                    pixPtr = new Pixel(R, G, B);
                    pixelPtrArray[x][y] = pixPtr;
            }
        }
    }

    for(int i = 0; i < ledY; i++) {
        for(int j = 0; j < ledX; j++) {
            if((i == 0) || (i == (ledY - 1)) || (j == 0) || (j == (ledX - 1))) {
                
            }
        }
    }

    return 0;
}
