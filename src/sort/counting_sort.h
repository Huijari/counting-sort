// Copyright 2017 Alexandre Cesar

#ifndef SORT_H
#define SORT_H

#include <stdint.h>

#include "input.h"

/**
 * Sort an array using the Counting Sort algorithm
 *
 * @param input Struct representing the data to be sorted
 *
 * @return New array with the items sorted
 */
uint32_t* counting_sort(input_t input);

#endif
