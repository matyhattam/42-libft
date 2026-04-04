#include "libft.h"

int ft_xlen(unsigned long x) {
  int len = 0;
  unsigned long tmp = x;
  if (tmp == 0)
    len = 1;
  while (tmp != 0) {
    tmp /= 16;
    len++;
  }
  return (len);
}
