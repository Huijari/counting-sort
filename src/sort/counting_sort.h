// Copyright 2017 Alexandre Cesar

#ifndef SORT_H
#define SORT_H

#include <stdint.h>

#include "input.h"
#include "output.h"

/**
 * Sort an array using the Counting Sort algorithm
 *
 * @param input Struct representing the data to be sorted
 *
 * @return Output struct with the sorted items
 */
output_t* counting_sort(input_t* input);

#endif
