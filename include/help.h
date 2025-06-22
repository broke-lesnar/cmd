#ifndef HELP_H
#define HELP_H

#include <stdio.h>
#include <string.h>

void help(const char *args)
{
  if (!args)
  {
    printf("\033[1mCustom Mini Bash\033[0m\n");
    printf("Type 'help [command]' for details on a specific command.\n\n");
    printf("\033[1mAvailable commands:\033[0m\n");
    printf("  exit    - Exit the shell\n");
    printf("  ls      - List directory contents\n");
    printf("  pwd     - Print working directory\n");
    printf("  clear   - Clear the terminal screen\n");
    printf("  echo    - Print text to the terminal\n");
    printf("  man     - Show manual for a command\n");
    printf("  help    - Display this help message\n");
  }
  else if (strcmp(args, "exit") == 0)
  {
    printf("\033[1mexit\033[0m - Exit the shell\n");
    printf("Usage: exit\n");
  }
  else if (strcmp(args, "ls") == 0)
  {
    printf("\033[1mls\033[0m - List directory contents\n");
    printf("Usage: ls\n");
  }
  else if (strcmp(args, "pwd") == 0)
  {
    printf("\033[1mpwd\033[0m - Print working directory\n");
    printf("Usage: pwd\n");
  }
  else if (strcmp(args, "clear") == 0)
  {
    printf("\033[1mclear\033[0m - Clear the terminal screen\n");
    printf("Usage: clear\n");
  }
  else if (strcmp(args, "echo") == 0)
  {
    printf("\033[1mecho\033[0m - Print text to the terminal\n");
    printf("Usage: echo [text]\n");
  }
  else if (strcmp(args, "man") == 0)
  {
    printf("\033[1mman\033[0m - Show manual for a command\n");
    printf("Usage: man [command]\n");
  }
  else if (strcmp(args, "help") == 0)
  {
    printf("\033[1mhelp\033[0m - Display help information\n");
    printf("Usage: help [command]\n");
  }
  else
  {
    printf("No help available for '%s'\n", args);
  }
}

#endif