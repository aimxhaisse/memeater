#include <stdlib.h>
#include <stdio.h>

#define CHUNK_SIZE 3000

int		main(void)
{
  int		i;
  char *	chunk;

  while (1)
    {
      chunk = malloc(CHUNK_SIZE * sizeof(*chunk));
      if (chunk == NULL)
	{
	  return 1;
	}
      for (i = 0; i < CHUNK_SIZE; i++)
	{
	  chunk[i] = i;
	}
    }
  return 0;
}
