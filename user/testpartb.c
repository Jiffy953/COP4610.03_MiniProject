#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "Number of system calls executed so far: %d\n", secondpart()); //reports the number of system calls
  exit();
}
