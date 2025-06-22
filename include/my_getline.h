#ifndef MY_GETLINE_H
#define MY_GETLINE_H

#include <stdio.h>
#include <stdlib.h>

long my_getline(char **lineptr, size_t *n, FILE *stream);

#endif

long my_getline(char **lineptr, size_t *n, FILE *stream)
{
  if (lineptr == NULL || n == NULL || stream == NULL)
    return -1;

  size_t pos = 0;
  int c;

  if (*lineptr == NULL)
  {
    *n = 128;
    *lineptr = malloc(*n);
    if (*lineptr == NULL)
      return -1;
  }

  while ((c = fgetc(stream)) != EOF)
  {
    if (pos + 1 >= *n)
    {
      *n *= 2;
      char *new_ptr = realloc(*lineptr, *n);
      if (!new_ptr)
        return -1;
      *lineptr = new_ptr;
    }

    (*lineptr)[pos++] = c;

    if (c == '\n')
      break;
  }

  if (pos == 0 && c == EOF)
    return -1;

  (*lineptr)[pos] = '\0';
  return (long)pos;
}
