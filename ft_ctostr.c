#include "libft.h"

char *ft_ctostr(int c) {
  char *s = malloc(2);
  if (!s)
    return NULL;

  s[0] = (char)c;
  s[1] = '\0';
  return s;
}
