#include "pixel.h"
#include "functions.h"

int main() {
    const int pixelX = 1920;
    const int pixelY = 1080;
    const int ledX = 16;
    const int ledY = 10;
    unsigned char R = '-';
    unsigned char G = '-';
    unsigned char B = '-';
    Pixel *pixelPtrArray[X][Y];
    Pixel *pixPtr = nullptr;

    for(unsigned int i = 0; i < Y; i++) {
        for(unsigned int j = 0; j < X; j++) {
            GetPixel(R, G, B);
            if ((i < (pixelY / ledY))
                || (i > (pixelY - (1 + (pixelY / ledY)))
                || (j < (pixelX / ledX))
                || (j > (pixelX - (1 + (pixelX / ledX))))) {
                    pixPtr = new Pixel(R, G, B);
                    pixelPtrArray[i][j] = pixPtr;
            }
        }
    }

    return 0;
}
