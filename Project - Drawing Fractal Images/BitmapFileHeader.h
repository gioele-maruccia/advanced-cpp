//
// Created by Gioele Maruccia on 24/03/22.
//

#ifndef PROJECT___DRAWING_FRACTAL_IMAGES_BITMAPFILEHEADER_H
#define PROJECT___DRAWING_FRACTAL_IMAGES_BITMAPFILEHEADER_H

#include <cstdint> /* Standard variables dimensions are provided so to avoid that the arbitrary used Compiler could change variable characteristics */

using namespace std;

#pragma pack(2)

namespace caveofprogramming {

    struct BitmapFileHeader {
        char header[2]{'B', 'M'};
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffset;
    };

}

#endif //PROJECT___DRAWING_FRACTAL_IMAGES_BITMAPFILEHEADER_H
