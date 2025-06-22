#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fn.h"
#include "constants.h"
#include "my_getline.h"
#include "ls.h"
#include "pwd.h"
#include "clear.h"
#include "ec.h"

int main()
{
  char *line = NULL;
  size_t bufsize = 0;

  while (1)
  {
    printf("%s@%s:~$ ", USERNAME, HOSTNAME);

    long characters = my_getline(&line, &bufsize, stdin);
    if (characters == -1)
      break;

    if (line[characters - 1] == '\n')
      line[characters - 1] = '\0';

    char *command = strtok(line, " ");
    char *argument = strtok(NULL, "");

    if (!command)
      continue;
    if (strcmp(command, "exit") == 0)
      break;
    if (strcmp(command, "ls") == 0)
      ls();
    if (strcmp(command, "pwd") == 0)
      pwd();
    if (strcmp(command, "clear") == 0)
      clear();
    if (strcmp(command, "echo") == 0)
      ec(argument);
  }

  free(line);
  return 0;
}
