#include "stdio.h"
#include "time.h"

int main(int argc, char* argv[]) {
  time_t now;

  time(&now);
  printf("The computer thinks it's %ld\n", now);
  printf("%s\n", ctime(&now));

  return 0;
}