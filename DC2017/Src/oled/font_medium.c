
/*******************************************************************************
* font
* filename: C:/Repos/SpecializedSolutions/QCM/Software/DC2017/Src/oled/font_medium.xml
* name: font_medium
* family: MS Reference Sans Serif
* size: 12
* style: Normal
* included characters:  !"#$%&'()*+,-./0123456789:;<=>?\x0040ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~
* antialiasing: no
* type: proportional
* encoding: ASCII
* unicode bom: no
*
* preset name: Monochrome
* data block size: 8 bit(s), uint8_t
* RLE compression enabled: no
* conversion type: Monochrome, Edge 128
* bits per pixel: 1
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: yes
*******************************************************************************/

/*
 typedef struct {
     long int code;
     const tImage *image;
     } tChar;
 typedef struct {
     int length;
     const tChar *chars;
     } tFont;
*/

#include <stdint.h>
#include "resources.h"


static const uint8_t image_data_font_medium_0x20[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x20 = { image_data_font_medium_0x20, 4, 16};

static const uint8_t image_data_font_medium_0x21[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x00,
    0x20,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x21 = { image_data_font_medium_0x21, 5, 16};

static const uint8_t image_data_font_medium_0x22[16] = {
    0x00,
    0x00,
    0x00,
    0x48,
    0x48,
    0x48,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x22 = { image_data_font_medium_0x22, 6, 16};

static const uint8_t image_data_font_medium_0x23[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x09, 0x00,
    0x09, 0x00,
    0x12, 0x00,
    0x3f, 0x80,
    0x12, 0x00,
    0x12, 0x00,
    0x7f, 0x00,
    0x24, 0x00,
    0x24, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x23 = { image_data_font_medium_0x23, 10, 16};

static const uint8_t image_data_font_medium_0x24[16] = {
    0x00,
    0x00,
    0x00,
    0x10,
    0x10,
    0x3e,
    0x50,
    0x50,
    0x30,
    0x1c,
    0x12,
    0x12,
    0x7c,
    0x10,
    0x10,
    0x00
};
static const tImage font_medium_0x24 = { image_data_font_medium_0x24, 8, 16};

static const uint8_t image_data_font_medium_0x25[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x30, 0x80,
    0x49, 0x00,
    0x49, 0x00,
    0x4a, 0x00,
    0x32, 0x60,
    0x02, 0x90,
    0x04, 0x90,
    0x04, 0x90,
    0x08, 0x60,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x25 = { image_data_font_medium_0x25, 13, 16};

static const uint8_t image_data_font_medium_0x26[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x38, 0x00,
    0x44, 0x00,
    0x44, 0x00,
    0x44, 0x00,
    0x39, 0x00,
    0x45, 0x00,
    0x42, 0x00,
    0x43, 0x00,
    0x3c, 0x80,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x26 = { image_data_font_medium_0x26, 10, 16};

static const uint8_t image_data_font_medium_0x27[16] = {
    0x00,
    0x00,
    0x00,
    0x40,
    0x40,
    0x40,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x27 = { image_data_font_medium_0x27, 3, 16};

static const uint8_t image_data_font_medium_0x28[16] = {
    0x00,
    0x00,
    0x00,
    0x10,
    0x20,
    0x20,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x20,
    0x20,
    0x10,
    0x00
};
static const tImage font_medium_0x28 = { image_data_font_medium_0x28, 5, 16};

static const uint8_t image_data_font_medium_0x29[16] = {
    0x00,
    0x00,
    0x00,
    0x40,
    0x20,
    0x20,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x20,
    0x20,
    0x40,
    0x00
};
static const tImage font_medium_0x29 = { image_data_font_medium_0x29, 5, 16};

static const uint8_t image_data_font_medium_0x2a[16] = {
    0x00,
    0x00,
    0x00,
    0x10,
    0x54,
    0x38,
    0x54,
    0x10,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x2a = { image_data_font_medium_0x2a, 8, 16};

static const uint8_t image_data_font_medium_0x2b[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x08, 0x00,
    0x08, 0x00,
    0x08, 0x00,
    0x7f, 0x00,
    0x08, 0x00,
    0x08, 0x00,
    0x08, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x2b = { image_data_font_medium_0x2b, 9, 16};

static const uint8_t image_data_font_medium_0x2c[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x20,
    0x20,
    0x20,
    0x40,
    0x00
};
static const tImage font_medium_0x2c = { image_data_font_medium_0x2c, 4, 16};

static const uint8_t image_data_font_medium_0x2d[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x78,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x2d = { image_data_font_medium_0x2d, 5, 16};

static const uint8_t image_data_font_medium_0x2e[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x20,
    0x20,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x2e = { image_data_font_medium_0x2e, 4, 16};

static const uint8_t image_data_font_medium_0x2f[16] = {
    0x00,
    0x00,
    0x00,
    0x08,
    0x08,
    0x10,
    0x10,
    0x10,
    0x20,
    0x20,
    0x20,
    0x40,
    0x40,
    0x40,
    0x80,
    0x00
};
static const tImage font_medium_0x2f = { image_data_font_medium_0x2f, 5, 16};

static const uint8_t image_data_font_medium_0x30[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x42,
    0x42,
    0x42,
    0x42,
    0x42,
    0x42,
    0x42,
    0x3c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x30 = { image_data_font_medium_0x30, 8, 16};

static const uint8_t image_data_font_medium_0x31[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x08,
    0x38,
    0x08,
    0x08,
    0x08,
    0x08,
    0x08,
    0x08,
    0x3e,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x31 = { image_data_font_medium_0x31, 8, 16};

static const uint8_t image_data_font_medium_0x32[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x42,
    0x42,
    0x02,
    0x04,
    0x18,
    0x20,
    0x40,
    0x7e,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x32 = { image_data_font_medium_0x32, 8, 16};

static const uint8_t image_data_font_medium_0x33[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x42,
    0x02,
    0x02,
    0x1c,
    0x02,
    0x02,
    0x42,
    0x3c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x33 = { image_data_font_medium_0x33, 8, 16};

static const uint8_t image_data_font_medium_0x34[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x04,
    0x0c,
    0x14,
    0x24,
    0x44,
    0x7f,
    0x04,
    0x04,
    0x04,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x34 = { image_data_font_medium_0x34, 8, 16};

static const uint8_t image_data_font_medium_0x35[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x7e,
    0x40,
    0x40,
    0x7c,
    0x02,
    0x02,
    0x02,
    0x42,
    0x3c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x35 = { image_data_font_medium_0x35, 8, 16};

static const uint8_t image_data_font_medium_0x36[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x1c,
    0x20,
    0x40,
    0x7c,
    0x42,
    0x42,
    0x42,
    0x42,
    0x3c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x36 = { image_data_font_medium_0x36, 8, 16};

static const uint8_t image_data_font_medium_0x37[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x7e,
    0x02,
    0x04,
    0x04,
    0x08,
    0x08,
    0x10,
    0x10,
    0x20,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x37 = { image_data_font_medium_0x37, 8, 16};

static const uint8_t image_data_font_medium_0x38[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x42,
    0x42,
    0x42,
    0x3c,
    0x42,
    0x42,
    0x42,
    0x3c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x38 = { image_data_font_medium_0x38, 8, 16};

static const uint8_t image_data_font_medium_0x39[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x42,
    0x42,
    0x42,
    0x42,
    0x3e,
    0x02,
    0x04,
    0x38,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x39 = { image_data_font_medium_0x39, 8, 16};

static const uint8_t image_data_font_medium_0x3a[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x20,
    0x20,
    0x00,
    0x00,
    0x00,
    0x20,
    0x20,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x3a = { image_data_font_medium_0x3a, 5, 16};

static const uint8_t image_data_font_medium_0x3b[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x20,
    0x20,
    0x00,
    0x00,
    0x00,
    0x20,
    0x20,
    0x20,
    0x40,
    0x00
};
static const tImage font_medium_0x3b = { image_data_font_medium_0x3b, 5, 16};

static const uint8_t image_data_font_medium_0x3c[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x03, 0x00,
    0x0c, 0x00,
    0x30, 0x00,
    0x40, 0x00,
    0x30, 0x00,
    0x0c, 0x00,
    0x03, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x3c = { image_data_font_medium_0x3c, 9, 16};

static const uint8_t image_data_font_medium_0x3d[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x7f, 0x00,
    0x00, 0x00,
    0x7f, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x3d = { image_data_font_medium_0x3d, 9, 16};

static const uint8_t image_data_font_medium_0x3e[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x60, 0x00,
    0x18, 0x00,
    0x06, 0x00,
    0x01, 0x00,
    0x06, 0x00,
    0x18, 0x00,
    0x60, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x3e = { image_data_font_medium_0x3e, 9, 16};

static const uint8_t image_data_font_medium_0x3f[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x38,
    0x44,
    0x04,
    0x04,
    0x08,
    0x10,
    0x10,
    0x00,
    0x10,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x3f = { image_data_font_medium_0x3f, 7, 16};

static const uint8_t image_data_font_medium_0x40[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x0f, 0x00,
    0x30, 0xc0,
    0x27, 0x40,
    0x49, 0x20,
    0x49, 0x20,
    0x49, 0x20,
    0x49, 0x20,
    0x27, 0xc0,
    0x30, 0x00,
    0x0f, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x40 = { image_data_font_medium_0x40, 12, 16};

static const uint8_t image_data_font_medium_0x41[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x18,
    0x18,
    0x24,
    0x24,
    0x42,
    0x42,
    0x7e,
    0x81,
    0x81,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x41 = { image_data_font_medium_0x41, 8, 16};

static const uint8_t image_data_font_medium_0x42[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x78,
    0x44,
    0x44,
    0x44,
    0x7c,
    0x42,
    0x42,
    0x42,
    0x7c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x42 = { image_data_font_medium_0x42, 8, 16};

static const uint8_t image_data_font_medium_0x43[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x1e, 0x00,
    0x21, 0x00,
    0x40, 0x00,
    0x40, 0x00,
    0x40, 0x00,
    0x40, 0x00,
    0x40, 0x00,
    0x21, 0x00,
    0x1e, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x43 = { image_data_font_medium_0x43, 9, 16};

static const uint8_t image_data_font_medium_0x44[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x7c, 0x00,
    0x42, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x42, 0x00,
    0x7c, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x44 = { image_data_font_medium_0x44, 9, 16};

static const uint8_t image_data_font_medium_0x45[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x7e,
    0x40,
    0x40,
    0x40,
    0x7e,
    0x40,
    0x40,
    0x40,
    0x7e,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x45 = { image_data_font_medium_0x45, 8, 16};

static const uint8_t image_data_font_medium_0x46[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x7e,
    0x40,
    0x40,
    0x40,
    0x7c,
    0x40,
    0x40,
    0x40,
    0x40,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x46 = { image_data_font_medium_0x46, 7, 16};

static const uint8_t image_data_font_medium_0x47[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x1e, 0x00,
    0x21, 0x00,
    0x40, 0x00,
    0x40, 0x00,
    0x47, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x21, 0x00,
    0x1e, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x47 = { image_data_font_medium_0x47, 9, 16};

static const uint8_t image_data_font_medium_0x48[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x7f, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x48 = { image_data_font_medium_0x48, 9, 16};

static const uint8_t image_data_font_medium_0x49[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x70,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x70,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x49 = { image_data_font_medium_0x49, 5, 16};

static const uint8_t image_data_font_medium_0x4a[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x70,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0xe0,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x4a = { image_data_font_medium_0x4a, 5, 16};

static const uint8_t image_data_font_medium_0x4b[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x42,
    0x44,
    0x48,
    0x50,
    0x60,
    0x50,
    0x48,
    0x44,
    0x42,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x4b = { image_data_font_medium_0x4b, 8, 16};

static const uint8_t image_data_font_medium_0x4c[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x7e,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x4c = { image_data_font_medium_0x4c, 7, 16};

static const uint8_t image_data_font_medium_0x4d[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x61, 0x80,
    0x61, 0x80,
    0x52, 0x80,
    0x52, 0x80,
    0x52, 0x80,
    0x4c, 0x80,
    0x4c, 0x80,
    0x40, 0x80,
    0x40, 0x80,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x4d = { image_data_font_medium_0x4d, 10, 16};

static const uint8_t image_data_font_medium_0x4e[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x61, 0x00,
    0x61, 0x00,
    0x51, 0x00,
    0x51, 0x00,
    0x49, 0x00,
    0x45, 0x00,
    0x45, 0x00,
    0x43, 0x00,
    0x43, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x4e = { image_data_font_medium_0x4e, 9, 16};

static const uint8_t image_data_font_medium_0x4f[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x1e, 0x00,
    0x21, 0x00,
    0x40, 0x80,
    0x40, 0x80,
    0x40, 0x80,
    0x40, 0x80,
    0x40, 0x80,
    0x21, 0x00,
    0x1e, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x4f = { image_data_font_medium_0x4f, 10, 16};

static const uint8_t image_data_font_medium_0x50[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x7c,
    0x42,
    0x42,
    0x42,
    0x42,
    0x7c,
    0x40,
    0x40,
    0x40,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x50 = { image_data_font_medium_0x50, 8, 16};

static const uint8_t image_data_font_medium_0x51[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x1e, 0x00,
    0x21, 0x00,
    0x40, 0x80,
    0x40, 0x80,
    0x40, 0x80,
    0x40, 0x80,
    0x40, 0x80,
    0x21, 0x00,
    0x1e, 0x00,
    0x02, 0x00,
    0x01, 0x80,
    0x00, 0x00
};
static const tImage font_medium_0x51 = { image_data_font_medium_0x51, 10, 16};

static const uint8_t image_data_font_medium_0x52[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x7c,
    0x42,
    0x42,
    0x42,
    0x7c,
    0x48,
    0x44,
    0x42,
    0x41,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x52 = { image_data_font_medium_0x52, 8, 16};

static const uint8_t image_data_font_medium_0x53[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x42,
    0x40,
    0x40,
    0x3c,
    0x02,
    0x02,
    0x42,
    0x3c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x53 = { image_data_font_medium_0x53, 8, 16};

static const uint8_t image_data_font_medium_0x54[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0xfe,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x54 = { image_data_font_medium_0x54, 7, 16};

static const uint8_t image_data_font_medium_0x55[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x41, 0x00,
    0x22, 0x00,
    0x1c, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x55 = { image_data_font_medium_0x55, 9, 16};

static const uint8_t image_data_font_medium_0x56[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x81,
    0x81,
    0x42,
    0x42,
    0x42,
    0x24,
    0x24,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x56 = { image_data_font_medium_0x56, 8, 16};

static const uint8_t image_data_font_medium_0x57[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x42, 0x10,
    0x42, 0x10,
    0x45, 0x10,
    0x45, 0x10,
    0x25, 0x20,
    0x28, 0xa0,
    0x28, 0xa0,
    0x10, 0x40,
    0x10, 0x40,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x57 = { image_data_font_medium_0x57, 13, 16};

static const uint8_t image_data_font_medium_0x58[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x42,
    0x42,
    0x24,
    0x18,
    0x18,
    0x18,
    0x24,
    0x42,
    0x42,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x58 = { image_data_font_medium_0x58, 8, 16};

static const uint8_t image_data_font_medium_0x59[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x82,
    0x44,
    0x44,
    0x28,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x59 = { image_data_font_medium_0x59, 7, 16};

static const uint8_t image_data_font_medium_0x5a[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x7e,
    0x02,
    0x04,
    0x08,
    0x10,
    0x10,
    0x20,
    0x40,
    0x7e,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x5a = { image_data_font_medium_0x5a, 8, 16};

static const uint8_t image_data_font_medium_0x5b[16] = {
    0x00,
    0x00,
    0x00,
    0x70,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x70,
    0x00
};
static const tImage font_medium_0x5b = { image_data_font_medium_0x5b, 5, 16};

static const uint8_t image_data_font_medium_0x5c[16] = {
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0x40,
    0x40,
    0x40,
    0x20,
    0x20,
    0x10,
    0x10,
    0x10,
    0x08,
    0x08,
    0x00
};
static const tImage font_medium_0x5c = { image_data_font_medium_0x5c, 5, 16};

static const uint8_t image_data_font_medium_0x5d[16] = {
    0x00,
    0x00,
    0x00,
    0x70,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x70,
    0x00
};
static const tImage font_medium_0x5d = { image_data_font_medium_0x5d, 5, 16};

static const uint8_t image_data_font_medium_0x5e[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x0c, 0x00,
    0x12, 0x00,
    0x21, 0x00,
    0x40, 0x80,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x5e = { image_data_font_medium_0x5e, 10, 16};

static const uint8_t image_data_font_medium_0x5f[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xff,
    0x00
};
static const tImage font_medium_0x5f = { image_data_font_medium_0x5f, 8, 16};

static const uint8_t image_data_font_medium_0x60[16] = {
    0x00,
    0x00,
    0x00,
    0x20,
    0x10,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x60 = { image_data_font_medium_0x60, 8, 16};

static const uint8_t image_data_font_medium_0x61[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x02,
    0x02,
    0x3e,
    0x42,
    0x42,
    0x3e,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x61 = { image_data_font_medium_0x61, 8, 16};

static const uint8_t image_data_font_medium_0x62[16] = {
    0x00,
    0x00,
    0x00,
    0x40,
    0x40,
    0x40,
    0x5c,
    0x62,
    0x42,
    0x42,
    0x42,
    0x42,
    0x7c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x62 = { image_data_font_medium_0x62, 8, 16};

static const uint8_t image_data_font_medium_0x63[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x38,
    0x44,
    0x40,
    0x40,
    0x40,
    0x44,
    0x38,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x63 = { image_data_font_medium_0x63, 6, 16};

static const uint8_t image_data_font_medium_0x64[16] = {
    0x00,
    0x00,
    0x00,
    0x02,
    0x02,
    0x02,
    0x3e,
    0x42,
    0x42,
    0x42,
    0x42,
    0x46,
    0x3a,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x64 = { image_data_font_medium_0x64, 8, 16};

static const uint8_t image_data_font_medium_0x65[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x42,
    0x42,
    0x7e,
    0x40,
    0x42,
    0x3c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x65 = { image_data_font_medium_0x65, 8, 16};

static const uint8_t image_data_font_medium_0x66[16] = {
    0x00,
    0x00,
    0x00,
    0x30,
    0x40,
    0x40,
    0xf0,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x66 = { image_data_font_medium_0x66, 4, 16};

static const uint8_t image_data_font_medium_0x67[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3e,
    0x42,
    0x42,
    0x42,
    0x42,
    0x46,
    0x3a,
    0x02,
    0x3c,
    0x00
};
static const tImage font_medium_0x67 = { image_data_font_medium_0x67, 8, 16};

static const uint8_t image_data_font_medium_0x68[16] = {
    0x00,
    0x00,
    0x00,
    0x40,
    0x40,
    0x40,
    0x5c,
    0x62,
    0x42,
    0x42,
    0x42,
    0x42,
    0x42,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x68 = { image_data_font_medium_0x68, 8, 16};

static const uint8_t image_data_font_medium_0x69[16] = {
    0x00,
    0x00,
    0x00,
    0x40,
    0x00,
    0x00,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x69 = { image_data_font_medium_0x69, 3, 16};

static const uint8_t image_data_font_medium_0x6a[16] = {
    0x00,
    0x00,
    0x00,
    0x20,
    0x00,
    0x00,
    0x60,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0xc0,
    0x00
};
static const tImage font_medium_0x6a = { image_data_font_medium_0x6a, 4, 16};

static const uint8_t image_data_font_medium_0x6b[16] = {
    0x00,
    0x00,
    0x00,
    0x40,
    0x40,
    0x40,
    0x44,
    0x48,
    0x50,
    0x60,
    0x50,
    0x48,
    0x44,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x6b = { image_data_font_medium_0x6b, 7, 16};

static const uint8_t image_data_font_medium_0x6c[16] = {
    0x00,
    0x00,
    0x00,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x6c = { image_data_font_medium_0x6c, 3, 16};

static const uint8_t image_data_font_medium_0x6d[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x7b, 0x80,
    0x44, 0x40,
    0x44, 0x40,
    0x44, 0x40,
    0x44, 0x40,
    0x44, 0x40,
    0x44, 0x40,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x6d = { image_data_font_medium_0x6d, 11, 16};

static const uint8_t image_data_font_medium_0x6e[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x5c,
    0x62,
    0x42,
    0x42,
    0x42,
    0x42,
    0x42,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x6e = { image_data_font_medium_0x6e, 8, 16};

static const uint8_t image_data_font_medium_0x6f[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x42,
    0x42,
    0x42,
    0x42,
    0x42,
    0x3c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x6f = { image_data_font_medium_0x6f, 8, 16};

static const uint8_t image_data_font_medium_0x70[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x5c,
    0x62,
    0x42,
    0x42,
    0x42,
    0x42,
    0x7c,
    0x40,
    0x40,
    0x00
};
static const tImage font_medium_0x70 = { image_data_font_medium_0x70, 8, 16};

static const uint8_t image_data_font_medium_0x71[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3e,
    0x42,
    0x42,
    0x42,
    0x42,
    0x46,
    0x3a,
    0x02,
    0x02,
    0x00
};
static const tImage font_medium_0x71 = { image_data_font_medium_0x71, 8, 16};

static const uint8_t image_data_font_medium_0x72[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x58,
    0x60,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x72 = { image_data_font_medium_0x72, 5, 16};

static const uint8_t image_data_font_medium_0x73[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3c,
    0x40,
    0x40,
    0x38,
    0x04,
    0x04,
    0x78,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x73 = { image_data_font_medium_0x73, 7, 16};

static const uint8_t image_data_font_medium_0x74[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x40,
    0x40,
    0xf8,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x38,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x74 = { image_data_font_medium_0x74, 5, 16};

static const uint8_t image_data_font_medium_0x75[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x42,
    0x42,
    0x42,
    0x42,
    0x42,
    0x46,
    0x3a,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x75 = { image_data_font_medium_0x75, 8, 16};

static const uint8_t image_data_font_medium_0x76[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x44,
    0x44,
    0x28,
    0x28,
    0x28,
    0x10,
    0x10,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x76 = { image_data_font_medium_0x76, 7, 16};

static const uint8_t image_data_font_medium_0x77[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x44, 0x40,
    0x44, 0x40,
    0x2a, 0x80,
    0x2a, 0x80,
    0x2a, 0x80,
    0x11, 0x00,
    0x11, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x77 = { image_data_font_medium_0x77, 11, 16};

static const uint8_t image_data_font_medium_0x78[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x44,
    0x44,
    0x28,
    0x10,
    0x28,
    0x44,
    0x44,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x78 = { image_data_font_medium_0x78, 7, 16};

static const uint8_t image_data_font_medium_0x79[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x44,
    0x44,
    0x28,
    0x28,
    0x28,
    0x10,
    0x10,
    0x10,
    0x20,
    0x00
};
static const tImage font_medium_0x79 = { image_data_font_medium_0x79, 7, 16};

static const uint8_t image_data_font_medium_0x7a[16] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x7c,
    0x04,
    0x08,
    0x10,
    0x20,
    0x40,
    0x7c,
    0x00,
    0x00,
    0x00
};
static const tImage font_medium_0x7a = { image_data_font_medium_0x7a, 7, 16};

static const uint8_t image_data_font_medium_0x7b[16] = {
    0x00,
    0x00,
    0x00,
    0x0c,
    0x10,
    0x10,
    0x10,
    0x10,
    0x60,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x0c,
    0x00
};
static const tImage font_medium_0x7b = { image_data_font_medium_0x7b, 8, 16};

static const uint8_t image_data_font_medium_0x7c[16] = {
    0x00,
    0x00,
    0x00,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x00
};
static const tImage font_medium_0x7c = { image_data_font_medium_0x7c, 5, 16};

static const uint8_t image_data_font_medium_0x7d[16] = {
    0x00,
    0x00,
    0x00,
    0x30,
    0x08,
    0x08,
    0x08,
    0x08,
    0x06,
    0x08,
    0x08,
    0x08,
    0x08,
    0x08,
    0x30,
    0x00
};
static const tImage font_medium_0x7d = { image_data_font_medium_0x7d, 8, 16};

static const uint8_t image_data_font_medium_0x7e[32] = {
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x30, 0x80,
    0x4c, 0x80,
    0x43, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00
};
static const tImage font_medium_0x7e = { image_data_font_medium_0x7e, 10, 16};


static const tChar font_medium_array[] = {

  // character: ' '
  {0x20, &font_medium_0x20},

  // character: '!'
  {0x21, &font_medium_0x21},

  // character: '"'
  {0x22, &font_medium_0x22},

  // character: '#'
  {0x23, &font_medium_0x23},

  // character: '$'
  {0x24, &font_medium_0x24},

  // character: '%'
  {0x25, &font_medium_0x25},

  // character: '&'
  {0x26, &font_medium_0x26},

  // character: '''
  {0x27, &font_medium_0x27},

  // character: '('
  {0x28, &font_medium_0x28},

  // character: ')'
  {0x29, &font_medium_0x29},

  // character: '*'
  {0x2a, &font_medium_0x2a},

  // character: '+'
  {0x2b, &font_medium_0x2b},

  // character: ','
  {0x2c, &font_medium_0x2c},

  // character: '-'
  {0x2d, &font_medium_0x2d},

  // character: '.'
  {0x2e, &font_medium_0x2e},

  // character: '/'
  {0x2f, &font_medium_0x2f},

  // character: '0'
  {0x30, &font_medium_0x30},

  // character: '1'
  {0x31, &font_medium_0x31},

  // character: '2'
  {0x32, &font_medium_0x32},

  // character: '3'
  {0x33, &font_medium_0x33},

  // character: '4'
  {0x34, &font_medium_0x34},

  // character: '5'
  {0x35, &font_medium_0x35},

  // character: '6'
  {0x36, &font_medium_0x36},

  // character: '7'
  {0x37, &font_medium_0x37},

  // character: '8'
  {0x38, &font_medium_0x38},

  // character: '9'
  {0x39, &font_medium_0x39},

  // character: ':'
  {0x3a, &font_medium_0x3a},

  // character: ';'
  {0x3b, &font_medium_0x3b},

  // character: '<'
  {0x3c, &font_medium_0x3c},

  // character: '='
  {0x3d, &font_medium_0x3d},

  // character: '>'
  {0x3e, &font_medium_0x3e},

  // character: '?'
  {0x3f, &font_medium_0x3f},

  // character: '\x0040'
  {0x40, &font_medium_0x40},

  // character: 'A'
  {0x41, &font_medium_0x41},

  // character: 'B'
  {0x42, &font_medium_0x42},

  // character: 'C'
  {0x43, &font_medium_0x43},

  // character: 'D'
  {0x44, &font_medium_0x44},

  // character: 'E'
  {0x45, &font_medium_0x45},

  // character: 'F'
  {0x46, &font_medium_0x46},

  // character: 'G'
  {0x47, &font_medium_0x47},

  // character: 'H'
  {0x48, &font_medium_0x48},

  // character: 'I'
  {0x49, &font_medium_0x49},

  // character: 'J'
  {0x4a, &font_medium_0x4a},

  // character: 'K'
  {0x4b, &font_medium_0x4b},

  // character: 'L'
  {0x4c, &font_medium_0x4c},

  // character: 'M'
  {0x4d, &font_medium_0x4d},

  // character: 'N'
  {0x4e, &font_medium_0x4e},

  // character: 'O'
  {0x4f, &font_medium_0x4f},

  // character: 'P'
  {0x50, &font_medium_0x50},

  // character: 'Q'
  {0x51, &font_medium_0x51},

  // character: 'R'
  {0x52, &font_medium_0x52},

  // character: 'S'
  {0x53, &font_medium_0x53},

  // character: 'T'
  {0x54, &font_medium_0x54},

  // character: 'U'
  {0x55, &font_medium_0x55},

  // character: 'V'
  {0x56, &font_medium_0x56},

  // character: 'W'
  {0x57, &font_medium_0x57},

  // character: 'X'
  {0x58, &font_medium_0x58},

  // character: 'Y'
  {0x59, &font_medium_0x59},

  // character: 'Z'
  {0x5a, &font_medium_0x5a},

  // character: '['
  {0x5b, &font_medium_0x5b},

  // character: '\'
  {0x5c, &font_medium_0x5c},

  // character: ']'
  {0x5d, &font_medium_0x5d},

  // character: '^'
  {0x5e, &font_medium_0x5e},

  // character: '_'
  {0x5f, &font_medium_0x5f},

  // character: '`'
  {0x60, &font_medium_0x60},

  // character: 'a'
  {0x61, &font_medium_0x61},

  // character: 'b'
  {0x62, &font_medium_0x62},

  // character: 'c'
  {0x63, &font_medium_0x63},

  // character: 'd'
  {0x64, &font_medium_0x64},

  // character: 'e'
  {0x65, &font_medium_0x65},

  // character: 'f'
  {0x66, &font_medium_0x66},

  // character: 'g'
  {0x67, &font_medium_0x67},

  // character: 'h'
  {0x68, &font_medium_0x68},

  // character: 'i'
  {0x69, &font_medium_0x69},

  // character: 'j'
  {0x6a, &font_medium_0x6a},

  // character: 'k'
  {0x6b, &font_medium_0x6b},

  // character: 'l'
  {0x6c, &font_medium_0x6c},

  // character: 'm'
  {0x6d, &font_medium_0x6d},

  // character: 'n'
  {0x6e, &font_medium_0x6e},

  // character: 'o'
  {0x6f, &font_medium_0x6f},

  // character: 'p'
  {0x70, &font_medium_0x70},

  // character: 'q'
  {0x71, &font_medium_0x71},

  // character: 'r'
  {0x72, &font_medium_0x72},

  // character: 's'
  {0x73, &font_medium_0x73},

  // character: 't'
  {0x74, &font_medium_0x74},

  // character: 'u'
  {0x75, &font_medium_0x75},

  // character: 'v'
  {0x76, &font_medium_0x76},

  // character: 'w'
  {0x77, &font_medium_0x77},

  // character: 'x'
  {0x78, &font_medium_0x78},

  // character: 'y'
  {0x79, &font_medium_0x79},

  // character: 'z'
  {0x7a, &font_medium_0x7a},

  // character: '{'
  {0x7b, &font_medium_0x7b},

  // character: '|'
  {0x7c, &font_medium_0x7c},

  // character: '}'
  {0x7d, &font_medium_0x7d},

  // character: '~'
  {0x7e, &font_medium_0x7e}

};


const tFont font_medium = { 95, font_medium_array };
