#include "libft.h"

char *ft_tohex(unsigned long x) {
  int i = 0;
  char hex_digits[] = "0123456789abcdef";

  char *hex = malloc(xlen(x) + 1);
  if (!hex)
    return (NULL);

  if (x == 0) {
    hex[0] = '0';
    hex[1] = '\0';
    return (hex);
  }

  while (x != 0) {
    hex[i] = hex_digits[x % 16];
    x /= 16;
    i++;
  }

  hex[i] = '\0';
  ft_rev_str(hex);

  return (hex);
}
