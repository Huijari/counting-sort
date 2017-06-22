// Copyright 2017 Alexandre Cesar

#ifndef INPUT_H
#define INPUT_H

#include <stdint.h>

typedef struct input_t input_t;
struct input_t {
  uint_t* values;
  uint_t length;
  uint_t range;
};

/**
 * Construct a input_t from the contents of a file
 *
 * @param path The path to the file
 *
 * @return Resulting input_t
 */
input_t* input_readfile(char* path);

#endif
