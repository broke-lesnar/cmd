#include <stdlib.h>

int clear()
{
  int ret = system("clear");
  (void)ret;
  return 0;
}