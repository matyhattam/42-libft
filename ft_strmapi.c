#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
  if (!s || !f)
    return (NULL);

  char *str = malloc(ft_strlen(s) + 1);
  size_t i = 0;
  while (s[i]) {
    str[i] = f(i, s[i]);
    i++;
  }

  str[i] = '\0';
  return (str);
}
