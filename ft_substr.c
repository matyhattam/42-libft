#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
  size_t s_len = ft_strlen(s);
  if (start >= s_len)
    return (NULL);

  if (start + len > s_len)
    len = s_len - start;

  char *sub = malloc(len + 1);
  if (!sub) {
    return (NULL);
  }

  size_t i = 0;
  while (i < len) {
    sub[i] = s[start + i];
    i++;
  }

  sub[i] = '\0';
  return (sub);
}
