

// Create a set of new characters
const  uint8_t charBitmap[][8] = {

  { //0
    B11111,
    B11111,
    B11111,
    B11111,
    B00000,
    B00000,
    B00000,
    B00000
  },

  { //1
    B00000,
    B00000,
    B00000,
    B00000,
    B11111,
    B11111,
    B11111,
    B11111
  },
  { //2
    B11111,
    B11111,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000
  },
  { //3
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B11111,
    B11111
  },
  { //4
    B11111,
    B11111,
    B11111,
    B11111,
    B01111,
    B00111,
    B00011,
    B00001
  },
  { //5
    B11111,
    B11111,
    B11111,
    B11111,
    B11110,
    B11100,
    B11000,
    B10000
  },
  { //6
    B00001,
    B00011,
    B00111,
    B01111,
    B11111,
    B11111,
    B11111,
    B11111
  },
  { //7
    B10000,
    B11000,
    B11100,
    B11110,
    B11111,
    B11111,
    B11111,
    B11111
  }

};

enum  bigdigix { bd_0, bd_1, bd_2, bd_3, bd_4, bd_5, bd_6, bd_7, bd_8, bd_9, bd_space, bd_dp, bd_dezp, bd_deg, bd_c } ;

const  byte bigdigits[][17] = {
  { // 0
    4,                     // number cols
    6, 0, 0, 7,            // first row
    255, 254, 254, 255,    // second row
    255, 254, 254, 255,    // ...
    4, 1, 1, 5
  },
  { // 1
    4,
    254, 254, 6, 255,
    254, 254, 254, 255,
    254, 254, 254, 255,
    254, 254, 254, 255
  },
  { // 2
    4,
    1, 0, 0, 7,
    254, 3, 1, 5,
    6, 0, 2, 254,
    255, 1, 1, 1
  },
  { // 3
    4,
    1, 0, 0, 7,
    254, 3, 3, 5,
    254, 2, 2, 7,
    0, 1, 1, 5
  },
  { // 4
    4,
    255, 254, 254, 255,
    4, 3, 3, 255,
    254, 2, 2, 255,
    254, 254, 254, 255
  },
  { // 5
    4,
    255, 0, 0, 0,
    255, 3, 3, 254,
    2, 2, 2, 7,
    0, 1, 1, 5
  },
  { // 6
    4,
    254, 1, 0, 0,
    255, 3, 3, 254,
    255, 2, 2, 7,
    4, 1, 1, 5
  },
  { // 7
    4,
    0, 0, 0, 255,
    254, 254, 6, 5,
    254, 6, 5, 254,
    254, 255, 254, 254
  },
  { // 8
    4,
    6, 0, 0, 7,
    4, 3, 3, 5,
    6, 2, 2, 7,
    4, 1, 1, 5
  },
  { // 9
    4,
    6, 0, 0, 7,
    4, 3, 3, 255,
    254, 2, 2, 255,
    1, 1, 0, 254
  },
  { // space
    1,
    254,
    254,
    254,
    254
  },

  { // dp
    1,
    254,
    165,
    165,
    254
  },

  { // dezp
    1,
    254,
    254,
    254,
    161
  },

  { // deg
    1,
    111,
    254,
    254,
    254
  },
  { // C
    4,                     // number cols
    6, 0, 0, 1,            // first row
    255, 254, 254, 254,    // second row
    255, 254, 254, 254,    // ...
    4, 1, 1, 0
  }

};
