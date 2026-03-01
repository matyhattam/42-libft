#include "libft.h"

int ft_strlcat(char *dest, const char *src, size_t size) {
  size_t i = 0;
  size_t str_len = ft_strlen(dest);

  if (size <= str_len) {
    return (size + ft_strlen(src));
  }

  while (src[i] != '\0' && str_len + i < size - 1) {
    dest[str_len] = src[i];
    i++;
    str_len++;
  }

  dest[str_len] = '\0';
  return (str_len + ft_strlen(src));
}
