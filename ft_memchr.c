#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
  size_t i = 0;

  while (((char *)s)[i] != '\0' && i < n - 1) {
    if (((char *)s)[i] == c) {
      return ((char *)&s[i]);
    }
    i++;
  }

  if (((char *)s)[i] == (char)c)
    return ((char *)&s[i]);

  return (0);
}
