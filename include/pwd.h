#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define PATH_MAX 256

int pwd()
{
  char cwd[PATH_MAX];

  if (getcwd(cwd, sizeof(cwd)) != NULL)
  {
    printf("%s\n", cwd);
  }
  else
  {
    perror("getcwd() error");
    return 1;
  }

  return 0;
}
