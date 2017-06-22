// Copyright 2017 Alexandre Cesar

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "counting_sort.h"

uint32_t* counting_sort(input_t* input) {
  uint32_t* count = calloc(sizeof(uint32_t), input->range);
  assert(count != NULL);
  memset(count, 0, sizeof(uint32_t) * input->range);

  for (int i = 0; i < input->length; i++)
    count[input->values[i]]++;

  uint32_t total = 0;
  for (int i = 0; i < input->range; i++) {
    uint32_t oldCount = count[i];
    count[i] = total;
    total += oldCount;
  }

  uint32_t* output = calloc(sizeof(uint32_t), input->length);
  for (int i = 0; i < input->length; i++) {
    output[count[input->values[i]]] = input->values[i];
    count[input->values[i]]++;
  }

  free(count);
  return output;
}
