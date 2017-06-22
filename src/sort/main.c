#include <assert.h>
#include <stdint.h>
#include <stdio.h>

#include "counting_sort.h"
#include "input.h"
#include "output.h"

void show_help();

int main(int argc, char** argv) {
  if (argc < 3) {
    show_help();
    return 1;
  }

  input_t* input = input_readfile(argv[1]);
  output_writefile(argv[2], counting_sort(input));
}

void show_help() {
  printf("Usage: sort [INPUT] [OUTPUT]\n");
}
