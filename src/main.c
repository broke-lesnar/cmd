#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_getline.h"

#define USERNAME "vinod"
#define HOSTNAME "hp"

int main()
{
  char *choice = NULL;
  size_t bufsize = 0;

  while (1)
  {
    printf("%s@%s:~$ ", USERNAME, HOSTNAME);

    long characters = my_getline(&choice, &bufsize, stdin);
    if (characters == -1)
      break;
    if (choice[characters - 1] == '\n')
      choice[characters - 1] = '\0';
    if (strcmp(choice, "exit") == 0)
      break;
  }

  free(choice);
  return 0;
}
