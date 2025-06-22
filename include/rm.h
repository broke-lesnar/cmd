#ifndef MY_RM_H
#define MY_RM_H

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int my_rm(const char *target)
{
  if (target == NULL || *target == '\0')
  {
    fprintf(stderr, "rm: missing operand\n");
    return 1;
  }

  if (rmdir(target) == 0)
  {
    return 0;
  }
  else
  {
    fprintf(stderr, "rm: failed to remove '%s': %s\n", target, strerror(errno));
    return 1;
  }
}

#endif
