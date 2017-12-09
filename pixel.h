#ifndef PIXEL_H
#define PIXEL_H

class Pixel {
    public:
        Pixel(unsigned char R = '-', unsigned char G = '-', unsigned char B = '-');
        unsigned char GetR() const;
        unsigned char GetG() const;
        unsigned char GetB() const;
    private:
        unsigned char R;
        unsigned char G;
        unsigned char B;
};

#endif
