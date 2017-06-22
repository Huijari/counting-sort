#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_help();

int main(int argc, char** argv) {
  if (argc < 3) {
    show_help();
    return 1;
  }

  int range = atoi(argv[1]);
  int quantity = atoi(argv[2]);

  if (!range || !quantity) {
    show_help();
    return 2;
  }

  srand(time(NULL));
  printf("%i\n", quantity);
  for (int i = 0; i < quantity; i++)
    printf("%i ", rand() % range);
}

void show_help() {
  printf("Usage: rand [RANGE] [QUANTITY]\n");
}
