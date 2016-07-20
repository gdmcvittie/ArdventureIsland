/*
 * player
 */
// the_player.png
// 112x16 (16x16 tiles)
PROGMEM const unsigned char the_player[] = {
// width, height
16, 16,
//f1
0x00, 0x00, 0x00, 0x7C, 0xFE, 0xFF, 0x3F, 0x0F, 0x07, 0xC7, 
0xCF, 0x06, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x73, 0xFF, 0x63, 0xE6, 0xEA, 0xEA, 0xFE, 0x02, 0x01, 0x00, 
0x00, 0x00,
//f2
0x00, 0x00, 0x00, 0x3E, 0xFF, 0xFF, 0xBF, 0x0F, 0x07, 0xC7, 
0xCF, 0x06, 0xFF, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1D, 0x37, 0xE1, 0x6C, 0x7A, 0xF2, 0x3E, 0x03, 0x01, 0x00, 
0x00, 0x00,
//f3
0x00, 0x00, 0x00, 0x7C, 0xFE, 0xFF, 0x3F, 0x0F, 0x07, 0xC7, 
0xCF, 0x06, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1D, 0xF3, 0xCB, 0xD6, 0xF2, 0x32, 0xFE, 0x1A, 0x01, 0x00, 
0x00, 0x00,
//f4
0x00, 0x00, 0x00, 0x3C, 0xFE, 0x1F, 0x0F, 0xAF, 0x8F, 0x8F, 
0xAF, 0x1F, 0xFF, 0x1E, 0x00, 0x00, 0x30, 0x60, 0xE0, 0xEE, 
0x79, 0x7F, 0x79, 0x7B, 0x7D, 0x7D, 0x7F, 0x73, 0xF2, 0xEC, 
0x60, 0x30,
//f5
0x00, 0x00, 0x30, 0xFE, 0xFF, 0xBE, 0x3E, 0x1E, 0x0E, 0x8E, 
0x9E, 0x0E, 0xFC, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x30, 0x3D, 
0xF7, 0x81, 0xAC, 0xBA, 0xF0, 0x3D, 0x04, 0x06, 0x03, 0x00, 
0x00, 0x00,
//f6
0x00, 0x00, 0xFC, 0xFE, 0xFF, 0xFF, 0x1F, 0x07, 0x07, 0x6F, 
0x06, 0x1E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0x7F, 0x6B, 0x40, 0x5C, 0x7A, 0x72, 0x3F, 0x01, 0x00, 
0x00, 0x00,
//f7
0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0x30, 0x70, 
0x20, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0x1F, 0xFF, 0xEC, 0xB0, 0xEB, 0xC8, 0x7C, 0x07, 0x00, 
0x00, 0x00
};

PROGMEM const unsigned char the_player_mask[] = {
// width, height
16, 16,
//f1
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF,
//f2
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF,
//f3
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF,
//f4
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF,
//f5
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF,
//f6
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF,
//f7
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF
};






/*
 * hud
 */
// the_heart.png
PROGMEM const unsigned char the_heart[] = 
{0xFF, 0xFF, 0x99, 0x81, 0x81, 0xC3, 0xE7, 0xFF};

// the_lives.png
PROGMEM const unsigned char the_lives[] = 
{0xFF, 0xFF, 0xC3, 0xA5, 0x81, 0xDB, 0xE7, 0xFF};






/*
 * goodies
 */
// egg.png
// 8x8
PROGMEM const unsigned char the_egg[] = {
0x7C, 0xFE, 0xCF, 0xB7, 0xFB, 0xF7, 0xFE, 0x7C
};

// hammer.png
// 8x8
PROGMEM const unsigned char the_hammer[] = {
0x18, 0x0C, 0x06, 0x0E, 0x1F, 0x3B, 0x71, 0x21
};

// fruit.png
// 8x8
PROGMEM const unsigned char the_fruit[] = {
0x01, 0x3B, 0x4E, 0xB4, 0xBC, 0x5E, 0x3B, 0x01
};






/*
 * baddies
 */
// spider.png
// 8x8
PROGMEM const unsigned char the_spider[] = {
0xD7, 0x7C, 0x38, 0x7C, 0x7C, 0x38, 0x7C, 0xD7
};

// bee.png
// 8x8
PROGMEM const unsigned char the_bee[] = {
0x00, 0x0C, 0x0C, 0x60, 0x0C, 0x6E, 0x06, 0x00
};

// spikes.png
// 8x8
PROGMEM const unsigned char the_spikes[] = {
0x18, 0x07, 0x1C, 0x70, 0x0F, 0x0C, 0x10, 0x08
};

// rock.png
// 8x8
PROGMEM const unsigned char the_rock[] = {
0xC0, 0xE0, 0xA0, 0xD0, 0xD0, 0xB0, 0x60, 0xC0
};

// snail.png
// 8x8
PROGMEM const unsigned char the_snail[] = {
0xB0, 0xDA, 0xED, 0xE5, 0xE9, 0xD2, 0xE4, 0xB8
};


// the_boulder.png
// 16x16
PROGMEM const unsigned char the_boulder[] = {
0x00, 0xC0, 0x30, 0x98, 0xC8, 0xEC, 0xE6, 0xF2, 0xBA, 0x9E, 
0xC6, 0xEC, 0x8C, 0x38, 0x70, 0xC0, 0x00, 0x0F, 0x10, 0x37, 
0x27, 0x4C, 0xDE, 0x9C, 0xB9, 0xFB, 0xBF, 0xEF, 0x63, 0x3F, 
0x1C, 0x07};

// the_bird.png
// 16x16
PROGMEM const unsigned char the_bird[] = {
0x00, 0xC0, 0xE0, 0x60, 0xE0, 0xE0, 0xE0, 0xC0, 0xFC, 0xFE, 
0xFF, 0xFF, 0xFF, 0x77, 0x80, 0x00, 0x02, 0x03, 0x07, 0x07, 
0x0F, 0x1F, 0x9F, 0xFF, 0xFF, 0x7F, 0x37, 0x1D, 0x0E, 0x06, 
0x07, 0x03};













/*
 * level picker - level done
 */
PROGMEM const unsigned char the_level_done[] = 
{0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xAA, 0xAA, 0xAA, 0xAB, 
0xD5, 0x55, 0x55, 0x55, 0xFF, 0xFF, 0xFF, 0xFF};











/*
 * level 1
 */
//top tile
PROGMEM const unsigned char the_level1_top_tile[] = 
{0x04, 0x48, 0x30, 0x10, 0x23, 0x41, 0x02, 0x04, 0x28, 0x10, 
0x10, 0x88, 0x50, 0x28, 0x10, 0x0C, 0x01, 0x02, 0x04, 0x08, 
0x10, 0x08, 0x04, 0x03, 0x02, 0x02, 0x05, 0x08, 0x10, 0x10, 
0x08, 0x06};

 //btm tile
PROGMEM const unsigned char the_level1_btm_tile[] = 
{0x02, 0x06, 0x4A, 0xC0, 0x1C, 0x3E, 0x78, 0x32, 0xC6, 0xEE, 
0xE6, 0x70, 0x00, 0x24, 0x0E, 0x60, 0x61, 0x63, 0x80, 0xAC, 
0x07, 0x03, 0x10, 0x58, 0x49, 0x31, 0x84, 0xC8, 0x03, 0x9B, 
0x8C, 0x64};


/*
 * level 2
 */
//top tile
PROGMEM const unsigned char the_level2_top_tile[] = 
{0xAA, 0x55, 0x2A, 0x00, 0x54, 0xAA, 0x55, 0xAA, 0x54, 0xA8, 
0x00, 0x00, 0x2A, 0x55, 0xAA, 0x55, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x02, 0x05, 0x0A, 0x05, 0x02, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x01};

 //btm tile
PROGMEM const unsigned char the_level2_btm_tile[] = 
{0x2A, 0x54, 0x0A, 0x14, 0x2A, 0x54, 0x2A, 0x14, 0x2A, 0x54, 
0xAA, 0x54, 0x2A, 0x54, 0x2A, 0x54, 0x3E, 0x58, 0x3F, 0x5E, 
0x3E, 0x50, 0x3C, 0x5F, 0x3E, 0x40, 0x38, 0x5C, 0x3E, 0x58, 
0x30, 0x5E};

// the_level2_platform.png
PROGMEM const unsigned char the_level2_platform[] = {
0x00, 0x00, 0x28, 0x54, 0x2E, 0x5E, 0x2C, 0x1E, 0x2E, 0x16, 
0x0E, 0x1E, 0x1E, 0x2E, 0x5C, 0x3C, 0x18, 0x3C, 0x1E, 0x2E, 
0x1E, 0x3E, 0x5E, 0x2C, 0x58, 0x2E, 0x1E, 0x2E, 0x14, 0x28, 
0x50, 0x00};

//trees
PROGMEM const unsigned char the_level2_trees[] = {
0x00, 0x00, 0x3F, 0xE6, 0x0C, 0x48, 0x40, 0xC0, 0x40, 0x00, 
0x0A, 0x0F, 0x85, 0xC2, 0x60, 0xA0, 0xB0, 0xD8, 0x4D, 0x46, 
0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 
0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0xF0, 0x38, 0x00, 0x00, 
0x00, 0x08, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x18, 0x30, 
0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x08, 
0x10, 0x60, 0xC0, 0x00, 0x80, 0x60, 0x10, 0x0E, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xF0, 0x00, 0xF0, 0xE0, 0xE0, 0x00, 0x00, 
0xFC, 0x00, 0x00, 0x00, 0xC0, 0x78, 0x00, 0x00, 0x00, 0x80, 
0x20, 0x8C, 0x12, 0x04, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 
0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x7E, 0x00, 
0x00, 0xC0, 0x3C, 0x00, 0x00, 0x00, 0x18, 0xF8, 0x00, 0xC0, 
0xF0, 0x00, 0x00, 0xC1, 0x78, 0x0E, 0x04, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 
0x01, 0x03, 0x00, 0xFE, 0x87, 0xC3, 0x61, 0xAE, 0xD3, 0x43, 
0x04, 0x78, 0x50, 0x2A, 0x50, 0x21, 0x50, 0xA8, 0xDC, 0xE0, 
0x00, 0x82, 0xFD, 0x00, 0x00, 0x80, 0xF0, 0x00, 0x00, 0x3E, 
0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x01, 0x02, 0x06, 0x0C, 0x38, 0x61, 0xC1, 0x02, 0x0C, 
0x8F, 0x80, 0xFC, 0x00, 0x0C, 0x02, 0x03, 0xFC, 0x03, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 
0x07, 0x3C, 0x00, 0x00, 0xFF, 0x00, 0x38, 0x07, 0x01, 0x00, 
0xC0, 0x38, 0x1E, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 
0xFC, 0x03, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 
0x00, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xFF, 0x01, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xFF, 0x00, 0x04, 0x03, 0x60, 0x73, 0x09, 0x04, 
0x02, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0x00, 0x24, 0x0F, 0x80, 0x78, 0x0C, 0x07, 
0x40, 0x80, 0x00, 0x82, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x38, 
0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x80, 0xF0, 0x1F, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x01, 0xE0, 
0x10, 0x00, 0x00, 0xFC, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x0F, 0xF0, 0x00, 
0x00, 0x00, 0x3F, 0xC0, 0x80, 0x03, 0x3E, 0x60, 0x00, 0x00, 
0x1F, 0xE0, 0x04, 0x38, 0x60, 0xC0, 0x01, 0x00, 0x00, 0x00, 
0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x40, 0x08, 0x04, 0x13, 0x01, 0xC0, 0x00, 0x00, 
0x70, 0x0F, 0x01, 0x00, 0x05, 0x01, 0xBA, 0x20, 0xC0, 0x00, 
0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xFF, 0x00, 
0x07, 0x3C, 0x60, 0x00, 0x00, 0x07, 0x38, 0x00, 0x07, 0x7E, 
0x98, 0x50, 0x40, 0x6C, 0xAA, 0x55, 0x21, 0x10, 0x04, 0x44, 
0x25, 0x4A, 0x04, 0x04, 0x14, 0x0E, 0x4F, 0x29, 0x08, 0x00, 
0x10, 0xB7, 0x11, 0x30, 0x50, 0xBF, 0x60, 0xA0, 0x48, 0x84, 
0x02, 0x09, 0x0E, 0x42, 0x03, 0x00, 0x00, 0xC0, 0x78, 0x0F, 
0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x30, 0xA4, 0x00, 
0x36, 0x62, 0x5A, 0xA8, 0x54, 0xA0, 0x42, 0x44, 0x77, 0x00, 
0x3C, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7F, 
0x00, 0x0C, 0xF2, 0xA4, 0x58, 0x2B, 0x1F, 0xA8, 0x00, 0x03, 
0x7E, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7E, 0x54, 0x2C, 0x54, 
0x78, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x02, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x05, 
0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 
0x00, 0x02, 0x00, 0x04, 0x01, 0x00, 0x01, 0x00, 0x01, 0x02, 
0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};


// the-level-end.png
// 32x32
PROGMEM const unsigned char the_level_end[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xC0, 0xE0, 0xE0, 0xE0, 0xC8, 0x1C, 0xDE, 0x5E, 0x4E, 
0x6C, 0x20, 0x2E, 0x26, 0x36, 0x16, 0x16, 0x12, 0x30, 0x24, 
0x2E, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x78, 
0x7C, 0x7C, 0x38, 0x93, 0xC7, 0x73, 0x19, 0x0C, 0x06, 0x03, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xDE, 0xDE, 
0x03, 0xF9, 0x0C, 0x17, 0x41, 0x09, 0x20, 0x02, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF1, 0xF7, 0xF7, 
0xE7, 0x0F, 0xE0, 0x3F, 0x80, 0x11, 0x44, 0x00, 0x11, 0x00, 
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};


// the_boss1.png
// 32x32
PROGMEM const unsigned char the_boss1[] = {
0x00, 0x00, 0x00, 0x00, 0xC0, 0x20, 0xB0, 0x18, 0x4C, 0x64, 
0x76, 0xF2, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xEA, 0xFA, 0x7A, 
0x3E, 0xBE, 0x98, 0xD8, 0xD0, 0xF0, 0xC0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x40, 0xE0, 0xF3, 0xFF, 0x98, 0x07, 0x03, 
0x03, 0x86, 0x86, 0x86, 0x86, 0xCE, 0xCE, 0xFC, 0xFF, 0xFF, 
0xFF, 0xCF, 0xCF, 0x87, 0x87, 0x87, 0x07, 0x03, 0x03, 0x87, 
0x9E, 0xFC, 0xF0, 0x00, 0x00, 0x00, 0x78, 0x7F, 0xE0, 0xFF, 
0xFB, 0xFF, 0xCF, 0xE7, 0xF3, 0xF1, 0xF9, 0xF9, 0xF9, 0xF1, 
0x73, 0x73, 0x73, 0xF3, 0xF3, 0xE3, 0x87, 0x07, 0x0F, 0x1F, 
0x3F, 0xFF, 0xFB, 0x7F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0x07, 0x05, 0x0D, 0x09, 0x0B, 0x0B, 0x1B, 0x13, 0x37, 
0x27, 0x6F, 0x4F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x7F, 0x2F, 
0x3E, 0x1E, 0x1F, 0x0F, 0x01, 0x00, 0x00, 0x00};


// the_boss2.png
// 32x40
PROGMEM const unsigned char the_boss2[] = {
0x00, 0x05, 0x0A, 0x15, 0x2A, 0x51, 0x02, 0x95, 0x0A, 0x45, 
0x8A, 0x55, 0xAA, 0x45, 0xAA, 0x55, 0xAA, 0x51, 0x2A, 0x51, 
0x2A, 0x51, 0x22, 0x55, 0xA2, 0x55, 0xA2, 0x55, 0x2A, 0x85, 
0x2A, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 
0x04, 0x09, 0x02, 0x10, 0x08, 0x55, 0xC8, 0xE5, 0xC8, 0xD4, 
0xCA, 0xD5, 0x82, 0x95, 0x8A, 0xD5, 0xC2, 0xE0, 0xEA, 0xE4, 
0xEA, 0xE4, 0xEA, 0xE5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x01, 
0xF9, 0xFB, 0x33, 0x87, 0xFF, 0xFF, 0x1F, 0x47, 0x73, 0x7B, 
0x79, 0x7D, 0x7D, 0x39, 0x83, 0xFF, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 
0xFF, 0xFE, 0x0E, 0x2E, 0x4E, 0x27, 0x57, 0x27, 0x53, 0x2B, 
0x53, 0xAB, 0x53, 0xA7, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 
0xFE, 0xFF, 0xFF, 0xFF, 0xE0, 0xEF, 0xEF, 0xCF, 0xDF, 0xDF, 
0xDF, 0xDF, 0xDE, 0xCC, 0xE9, 0xE2, 0xF0, 0xFF, 0xFF, 0xFF};

// the_boss2_apple.png
// 16x16
PROGMEM const unsigned char the_boss2_apple[] = {
0x00, 0xE0, 0x60, 0xF0, 0xF0, 0xE0, 0xE0, 0xFC, 0xE4, 0xE0, 
0xF0, 0x90, 0xB0, 0x20, 0xE0, 0x00, 0x00, 0x07, 0x1C, 0x31, 
0x27, 0x6F, 0x4F, 0x7E, 0x3C, 0x3D, 0x31, 0x7F, 0x23, 0x38, 
0x0F, 0x00};


/*
 * misc screens
 */
// the_intro.png
PROGMEM const unsigned char the_intro[] = 
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xBC, 
0x70, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x5B, 
0xB7, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x5B, 
0xF7, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x66, 0xEB, 
0x30, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x76, 0x0B, 
0xB7, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0x76, 0xEB, 
0xB7, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x83, 0x8D, 0xF4, 
0x70, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x3F, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFE, 0x78, 0xEE, 0x18, 0x5F, 
0x02, 0xE0, 0x6E, 0x86, 0x0F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0x00, 0x39, 0xFB, 0xD6, 0xEB, 0x9F, 
0x3E, 0x6D, 0xEE, 0xBA, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFE, 0x7F, 0x83, 0xF7, 0xD6, 0xEB, 0xAE, 
0xBE, 0x6D, 0xEE, 0xBA, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xF8, 0xFF, 0xE7, 0xE7, 0xBA, 0x1B, 0xAE, 
0x82, 0xAD, 0xEE, 0x86, 0x0F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xE3, 0xFF, 0xF7, 0xCF, 0x82, 0xDB, 0xB5, 
0xBE, 0xCD, 0xEE, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xEF, 0xFF, 0xF3, 0x9F, 0xBA, 0xEB, 0xB5, 
0xBE, 0xCD, 0xEE, 0xBA, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xCF, 0xFF, 0xFB, 0xBF, 0x7C, 0xE8, 0x7B, 
0x82, 0xED, 0xF1, 0xBA, 0x0F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xDE, 0x03, 0xFB, 0x3F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xDC, 0x00, 0x00, 0x70, 0x01, 0xF1, 0xFF, 
0xFF, 0x87, 0xFE, 0x3F, 0x9E, 0x01, 0xFF, 0xFF, 
0xFF, 0xC0, 0xF0, 0x1E, 0xE3, 0xFC, 0x64, 0xFF, 
0xFF, 0x77, 0xFD, 0x9F, 0x6D, 0xFC, 0xFF, 0xFF, 
0xFF, 0xFD, 0xFC, 0x1E, 0xCF, 0xFF, 0x2E, 0xFF, 
0xFF, 0x7B, 0xFD, 0xEF, 0x6D, 0xFE, 0x7F, 0xFF, 
0xFF, 0xF9, 0xF8, 0x9E, 0xDF, 0xFF, 0xAE, 0xFF, 
0xFE, 0xFB, 0xFD, 0xEF, 0x6D, 0xFF, 0x3F, 0xFF, 
0xFF, 0xFB, 0xE3, 0x9E, 0x9F, 0x0F, 0xAE, 0xFF, 
0xFE, 0xFD, 0xFD, 0xE7, 0x6D, 0xCF, 0xBF, 0xFF, 
0xFF, 0xFB, 0x8F, 0x9E, 0xBE, 0x67, 0x2E, 0xFF, 
0xFE, 0xFD, 0xFD, 0xF7, 0x6D, 0xC3, 0x9F, 0xFF, 
0xFF, 0xF3, 0x3F, 0x9E, 0xBE, 0xF0, 0x6E, 0xFF, 
0xFD, 0xDE, 0xFD, 0xFB, 0x6D, 0xD9, 0xDF, 0xFF, 
0xFF, 0xF0, 0xFF, 0x9E, 0xBE, 0x7F, 0xEE, 0xFF, 
0xFD, 0xAE, 0xFD, 0xDB, 0x6D, 0xDD, 0xDF, 0xFF, 
0xFF, 0xE1, 0xFF, 0x9E, 0x9F, 0x81, 0xEE, 0xFF, 
0xFB, 0xAF, 0x7D, 0xCD, 0x6D, 0xDD, 0xDF, 0xFF, 
0xFF, 0xE1, 0xFF, 0x9E, 0x8F, 0xFC, 0xEE, 0xFF, 
0xFB, 0x8F, 0x7D, 0xCD, 0x6D, 0xDD, 0xDF, 0xFF, 
0xFF, 0xE3, 0xFF, 0x9E, 0x80, 0xFF, 0x6E, 0xFF, 
0xFB, 0xFF, 0x7D, 0xD6, 0x6D, 0xDD, 0xDF, 0xFF, 
0xFF, 0xF7, 0xFF, 0x9E, 0xE0, 0x3F, 0x6E, 0xFF, 
0xF7, 0xFF, 0xBD, 0xD6, 0x6D, 0xD9, 0xDF, 0xFF, 
0xFF, 0xFF, 0xF0, 0x1E, 0x8E, 0x3F, 0x6E, 0xFF, 
0xE7, 0x87, 0xBD, 0xDB, 0x6C, 0xC3, 0xDF, 0xFF, 
0xFF, 0xFF, 0x80, 0x1E, 0x0F, 0xFF, 0x66, 0x00, 
0xE7, 0x77, 0xDC, 0xD9, 0xEC, 0xCF, 0xDF, 0xFF, 
0xFF, 0xFE, 0x00, 0x1E, 0x87, 0xFE, 0x67, 0xFE, 
0x4F, 0x7B, 0xDC, 0xDD, 0xEC, 0xFF, 0x9F, 0xFF, 
0xFF, 0xFC, 0x10, 0x1E, 0xC3, 0xFC, 0xE3, 0xFE, 
0x4E, 0xF9, 0xEC, 0xDC, 0xEC, 0xFE, 0x3F, 0xFF, 
0xFF, 0xFC, 0x3E, 0x0C, 0xC1, 0xF8, 0xE0, 0xFC, 
0x4E, 0xFC, 0xEC, 0x1E, 0x0C, 0x1C, 0xFF, 0xFF, 
0xFF, 0xFC, 0x7F, 0x80, 0xE0, 0x01, 0xE0, 0x00, 
0xC1, 0xFC, 0x0C, 0x1E, 0x0C, 0x01, 0xFF, 0xFF, 
0xFF, 0xF9, 0xFF, 0xC1, 0xF8, 0x03, 0xF0, 0x00, 
0xE1, 0xFE, 0x1E, 0x3F, 0x1E, 0x03, 0xFF, 0xFF, 
0xFF, 0xFB, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFB, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xF9, 0xFF, 0xFF, 0xFD, 0xC0, 0x5F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFC, 0xFF, 0xFF, 0xF9, 0x80, 0x0F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFE, 0x7F, 0xFF, 0xE3, 0x80, 0x0F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0x3F, 0xFF, 0xCF, 0x83, 0x4F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xC3, 0xFF, 0x1F, 0x87, 0xDF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0x87, 0xDF, 0xC3, 
0x07, 0xBC, 0x18, 0x3D, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCE, 0x5F, 0xBD, 
0xDF, 0x5D, 0xEE, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC6, 0x5F, 0xBF, 
0xDF, 0x5D, 0xEE, 0xFC, 0x7F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x9F, 0xC3, 
0xDE, 0xEC, 0x1E, 0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEC, 0x3F, 0xFD, 
0xDE, 0x0D, 0xBE, 0xFC, 0x7F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCB, 0x7F, 0xBD, 
0xDE, 0xED, 0xDE, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD9, 0x7F, 0xC3, 
0xDD, 0xF5, 0xEE, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCC, 0x7F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

// the_level_picker.png
PROGMEM const unsigned char the_level_picker[] = 
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFE, 0x0C, 0x78, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFC, 0x80, 0x3F, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 
0xF9, 0x3E, 0x03, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 
0xFA, 0x4A, 0x03, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 
0xF8, 0xDE, 0x0C, 0xED, 0xFF, 0xFF, 0x1F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 
0xFC, 0xDC, 0x1E, 0x74, 0xFF, 0xFE, 0xC3, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xBA, 0xF8, 0x43, 0xFF, 
0xFC, 0xDC, 0x1F, 0x3C, 0xFF, 0xFF, 0xF9, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x12, 0x46, 0x1F, 0xFF, 
0xFE, 0x5E, 0x0F, 0x80, 0xFF, 0xF8, 0x1C, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x47, 0x41, 0x1F, 0xFF, 
0xFE, 0x5F, 0x0F, 0xE1, 0xFF, 0xE3, 0xCE, 0x3F, 
0xFF, 0xFF, 0xFF, 0xFF, 0x67, 0x50, 0x0F, 0xFF, 
0xFE, 0x4F, 0x87, 0xB0, 0xFF, 0xCF, 0xF3, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x67, 0x58, 0x0F, 0xFF, 
0xFF, 0x23, 0xC3, 0x20, 0x7F, 0x9F, 0xF9, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x5E, 0x0F, 0xFF, 
0xFF, 0x39, 0xE1, 0xE3, 0x3F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x3E, 0x0F, 0xFF, 
0xFF, 0x87, 0xF8, 0x07, 0x9F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0xBE, 0x03, 0xFF, 
0xFF, 0xC1, 0xEC, 0x1E, 0x9F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFC, 0x67, 0x9E, 0x08, 0xFF, 
0xFF, 0xF0, 0x77, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 
0xC7, 0xFF, 0xFF, 0xF8, 0xF7, 0xDC, 0x04, 0x7F, 
0xFF, 0xF8, 0x3F, 0xE7, 0x6F, 0xFF, 0xFF, 0xFC, 
0x00, 0xFF, 0xFF, 0xF2, 0xF4, 0x58, 0x85, 0x7F, 
0xFF, 0x86, 0x0F, 0xF7, 0x2F, 0xFF, 0xFF, 0xF0, 
0x00, 0x1F, 0xFF, 0xE7, 0xF7, 0xF9, 0xC1, 0x7F, 
0xFF, 0x37, 0x22, 0xE1, 0xAF, 0xFF, 0xFF, 0xC0, 
0x01, 0xC7, 0xFF, 0xEF, 0x1F, 0xFB, 0xFD, 0x7F, 
0xFF, 0x63, 0x3A, 0xE8, 0xEF, 0xFF, 0xFF, 0x80, 
0x3D, 0xF1, 0xFF, 0xEF, 0xFF, 0xFF, 0x01, 0x7F, 
0xFF, 0x00, 0x36, 0x4C, 0xEF, 0xFF, 0xFF, 0x00, 
0x31, 0xE0, 0xFF, 0xE7, 0x07, 0x80, 0x7C, 0x7F, 
0xFF, 0xC0, 0x37, 0x1C, 0xEF, 0xFF, 0xFE, 0x00, 
0x67, 0xFE, 0xFF, 0xF4, 0x70, 0x3F, 0xF0, 0xFF, 
0xFF, 0xE2, 0x27, 0xFA, 0x67, 0xFF, 0xFC, 0x00, 
0x6F, 0xFE, 0x7F, 0xF1, 0xFF, 0xFF, 0xE3, 0xFF, 
0xFF, 0xE6, 0x6D, 0xF2, 0x77, 0xFF, 0xF8, 0x18, 
0x4F, 0x1F, 0x7F, 0xFC, 0x00, 0x78, 0x07, 0xFF, 
0xFF, 0xE7, 0x64, 0x04, 0x77, 0xFF, 0xF8, 0x3C, 
0x5F, 0xC7, 0x7F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 
0xFF, 0xE2, 0x77, 0xF8, 0x77, 0xFF, 0xF8, 0x7E, 
0x48, 0x33, 0x7F, 0xFF, 0xFE, 0x00, 0x3F, 0xFF, 
0xFF, 0xF8, 0x30, 0x00, 0x77, 0xFF, 0xFC, 0x7E, 
0x60, 0x31, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFE, 0x1F, 0xC3, 0xE7, 0xFF, 0xFC, 0x7C, 
0x3F, 0x34, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0x07, 0xFF, 0xC7, 0xFF, 0xF8, 0xF8, 
0x3F, 0xB6, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xC0, 0x3F, 0x87, 0xFF, 0xF8, 0xF3, 
0xBF, 0xB7, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xF8, 0xF7, 
0xFE, 0x37, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xF9, 0xE7, 
0xE0, 0xE7, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xCF, 
0x9F, 0xC7, 0xDF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xE3, 
0x3F, 0x03, 0x9F, 0xFF, 0xCE, 0x7F, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xFA, 
0x7C, 0x03, 0x3F, 0xF0, 0x3F, 0x8F, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xFC, 
0xE0, 0x00, 0x7F, 0xFF, 0xF0, 0xE3, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF1, 
0xC0, 0x03, 0xFF, 0xFE, 0x06, 0x7F, 0xFF, 0xFF, 
0xFF, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xF0, 0x67, 
0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xFF, 0xFF, 
0xFF, 0xFC, 0x0F, 0x87, 0xFF, 0xFF, 0xF1, 0x0E, 
0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xF9, 0xF8, 
0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 
0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xF8, 0x60, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0x87, 0xC0, 0x00, 0xFF, 0xFC, 0x01, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
