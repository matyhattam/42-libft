#include "libft.h"

void ft_revstr(char *s) {
  size_t s_len = ft_strlen(s);
  size_t i = 0;
  size_t j = s_len - 1;
  char tmp;
  while (i < s_len / 2) {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
    i++;
    j--;
  }
}
