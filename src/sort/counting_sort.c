// Copyright 2017 Alexandre Cesar

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "counting_sort.h"

output_t* counting_sort(input_t* input) {
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

  output_t* output = malloc(sizeof(output_t));
  assert(output != NULL);
  output->length = input->length;
  output->values = calloc(sizeof(uint32_t), output->length);
  for (int i = 0; i < output->length; i++) {
    output->values[count[input->values[i]]] = input->values[i];
    count[input->values[i]]++;
  }

  free(count);
  return output;
}
