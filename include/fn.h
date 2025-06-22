#include <ctype.h>
char *ltrim(char *s)
{
  while (isspace((unsigned char)*s))
    s++;
  return s;
}