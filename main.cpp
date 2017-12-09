#include "pixel.h"
#include "functions.h"

int main() {
    const int X = 1920;
    const int Y = 1080;
    unsigned char R = '-';
    unsigned char G = '-';
    unsigned char B = '-';
    Pixel *pixelPtrArray[X][Y];
    Pixel *pixPtr = nullptr;

    for(unsigned int i = 0; i < X; i++) {
        for(unsigned int j = 0; j < Y; j++) {
            GetPixel(R, G, B);
            pixPtr = new Pixel(R, G, B);
            pixelPtrArray[i][j] = pixPtr;
        }
    }

    return 0;
}
