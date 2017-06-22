// Copyright 2017 Alexandre Cesar

#include <stdio.h>

#include "output.h"

void output_writefile(char* path, output_t* output) {
  FILE* file = fopen(path, "w");
  for (int i = 0; i < output->length; i++)\
    fprintf(file, "%i\n", output->values[i]);
}

