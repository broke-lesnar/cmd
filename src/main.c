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
#include "man.h"
#include "help.h"

int main()
{
  char *line = NULL;
  size_t bufsize = 0;

  printf("\n========================================================");
  printf("\n\n\tA lightweight command-line experience.");
  printf("\n\n========================================================\n\n");

  while (1)
  {
    printf("\033[1;34m%s@%s\033[0;34m:~$ \033[0m", USERNAME, HOSTNAME);

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
    if (strcmp(command, "man") == 0)
      man(argument);
    if (strcmp(command, "help") == 0)
      help(argument);
  }

  free(line);
  return 0;
}
