// Copyright 2017 Alexandre Cesar

#include <assert.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

#include "input.h"

input_t* input_readfile(char* path) {
  input_t* input = malloc(sizeof(input_t));

  FILE* file = fopen(path, "r");
  fscanf(file, "%i", &input->length);

  input->values = calloc(sizeof(uint32_t), input->length);
  assert(input->values != NULL);

  input->range = 0;
  for (int i = 0; i < input->length; i++) {
    int bytes_read = fscanf(file, "%" SCNu32, &input->values[i]);
    assert(bytes_read == 1);

    if (input->values[i] > input->range)
      input->range = input->values[i];
  }

  return input;
}

