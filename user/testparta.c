#include "types.h"
#include "user.h"

int
main(void)
{
  printf(1, "Initial count: %d\n", firstpart()); //reports how many times getpid has been called (should be zero)
  getpid(); //calls getpid
  printf(1, "After 1 getpid(): %d\n", firstpart()); //reports updated count (should be one)
  getpid(); 
  getpid();
  printf(1, "After 3 getpid(): %d\n", firstpart()); //reports updated count (should be three now)
  exit(); //ends the program
}
