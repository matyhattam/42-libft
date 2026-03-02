#include "libft.h"

char *ft_strchr(const char *s, int c) {
  size_t i = 0;

  while (s != 0) {
    if (s[i] == c) {
      return ((char *)&s[i]);
    }
    i++;
  }

  return (NULL);
}
