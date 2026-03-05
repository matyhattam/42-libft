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

char *ft_remove_char(const char *s, const char *set) {
  if (!s)
    return (NULL);

  char *str = malloc(sizeof(char *) * (ft_strlen(s) + 1));

  if (!str)
    return (NULL);

  size_t s_len = ft_strlen(s);
  size_t i = 0;
  size_t j = 0;

  while (i < s_len) {
    while (ft_separator(s[i], (char *)set)) {
      i++;
    }
    str[j] = s[i];
    j++;
    i++;
  }

  str[j] = '\0';
  return (str);
}
