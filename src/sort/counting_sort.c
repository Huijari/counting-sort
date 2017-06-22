// Copyright 2017 Alexandre Cesar

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "counting_sort.h"

uint32_t* counting_sort(uint32_t* input, uint32_t length, uint32_t range) {
  uint32_t* count = calloc(sizeof(uint32_t), range);
  assert(count != NULL);
  memset(count, 0, sizeof(uint32_t) * range);

  for (int i = 0; i < length; i++)
    count[input[i]]++;

  uint32_t total = 0;
  for (int i = 0; i < range; i++) {
    uint32_t oldCount = count[i];
    count[i] = total;
    total += oldCount;
  }

  uint32_t* output = calloc(sizeof(uint32_t), length);
  for (int i = 0; i < length; i++) {
    output[count[input[i]]] = input[i];
    count[input[i]]++;
  }

  free(count);
  return output;
}
