// Copyright 2017 Alexandre Cesar

#ifndef OUTPUT_H
#define OUTPUT_H

#include <stdint.h>

typedef struct output_t output_t;
struct output_t {
  // Array of sorted numbers
  uint32_t* values;

  // Length of the output
  uint32_t length;
};

/**
 * Write the contents of a output_t to a file
 *
 * @param path The path to the file
 * @param output Content to be written
 *
 */
void output_writefile(char* path, output_t* output);

#endif

