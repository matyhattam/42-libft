#include "libft.h"

int ft_separator(char c, char *charset) {
  int i = 0;
  while (charset[i]) {
    if (c == charset[i]) {
      return 1;
    }
    i++;
  }
  return 0;
}

char *ft_strtrim(const char *s, const char *set) {
  if (!s || !set)
    return (NULL);

  char *str = malloc(ft_strlen(s) + 1);
  if (!str)
    return (NULL);

  size_t s_len = ft_strlen(s);
  size_t i = 0;
  while (i < s_len && ft_separator(s[i], (char *)set))
    i++;

  while (s_len > i && ft_separator(s[s_len - 1], (char *)set))
    s_len--;

  size_t j = 0;
  while (i < s_len) {
    str[j++] = s[i++];
  }

  str[j] = '\0';
  return (str);
}
