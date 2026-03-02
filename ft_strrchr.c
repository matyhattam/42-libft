#include "libft.h"

char *ft_strrchr(const char *s, int c) {
  size_t str_len = ft_strlen(s);

  while (1) {
    if (s[str_len] == c)
      return ((char *)&s[str_len]);
    if (str_len == 0)
      break;
    str_len--;
  }

  return 0;
}
