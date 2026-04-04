#include "libft.h"

char *ft_utostr(unsigned int u) {
  int i = 0;
  char base10[] = "0123456789";

  char *s = malloc(ulen(u) + 1);
  if (!s)
    return (NULL);

  if (u == 0) {
    s[0] = '0';
    s[1] = '\0';
    return (s);
  }

  while (u != 0) {
    s[i] = base10[u % 10];
    u /= 10;
    i++;
  }

  s[i] = '\0';
  ft_rev_str(s);

  return (s);
}
