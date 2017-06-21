// Copyright 2017 Alexandre Cesar

#ifndef SORT_H
#define SORT_H

#include <stdint.h>

/**
 * Sort an array using the Counting Sort algorithm
 *
 * @param input Array of numbers to be sorted
 * @param legth Length of the input
 * @param range Range of the numbers of the input
 *
 * @return New array with the items sorted
 */
uint32_t* counting_sort(uint32_t* input, uint32_t length, uint32_t range);

#endif
