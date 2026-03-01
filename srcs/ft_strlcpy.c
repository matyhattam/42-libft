#include "libft.h"

char ft_strlcpy(char *dest, const char *src, size_t size) {
  size_t i = 0;

  while (i < size && src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';

  return (ft_strlen(src));
}
