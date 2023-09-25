#include "types.h"
#include "user.h"

int
main(void)
{
  printf(1, "Initial count: %d\n", firstpart());
  getpid();
  printf(1, "After 1 getpid(): %d\n", firstpart());
  getpid();
  getpid();
  printf(1, "After 3 getpid(): %d\n", firstpart());
  exit();
}
