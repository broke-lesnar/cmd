#include <stdio.h>
#include <dirent.h>

int ls()
{
  DIR *d;
  struct dirent *dir;
  d = opendir(".");

  if (d)
  {
    while ((dir = readdir(d)) != NULL)
    {
      printf("%s\t", dir->d_name);
    }
    printf("\n");
    closedir(d);
  }
  else
  {
    perror("Error opening directory");
    return 1;
  }
  return 0;
}