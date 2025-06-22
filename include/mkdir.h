#ifndef MY_MKDIR_H
#define MY_MKDIR_H

#define _POSIX_C_SOURCE 200809L // Enables POSIX features (mkdir, etc.)

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>

int my_mkdir(const char *dirname)
{
  if (dirname == NULL || *dirname == '\0')
  {
    fprintf(stderr, "mkdir: missing operand\n");
    return 1;
  }

  if (mkdir(dirname, 0755) == 0)
  {
    return 0;
  }
  else
  {
    fprintf(stderr, "mkdir: cannot create directory '%s': %s\n", dirname, strerror(errno));
    return 1;
  }
}

#endif
