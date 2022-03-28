//
// Created by gioel on 3/28/2022.
//

#ifndef PROJECT___DRAWING_FRACTAL_IMAGES_BITMAP_H
#define PROJECT___DRAWING_FRACTAL_IMAGES_BITMAP_H

#include <string>
#include <cstdint>
using namespace std;

namespace caveofprogramming {
    class Bitmap {
    private:
        int m_width{0};
        int m_height{0};
        unique_ptr<uint8_t[]>

    public:
        Bitmap(int width, int height);
        void setPixel(int x, int y, uint8_t green, uint8_t blue);
        bool write(string filename);

        virtual ~Bitmap();
    };
}

#endif //PROJECT___DRAWING_FRACTAL_IMAGES_BITMAP_H
