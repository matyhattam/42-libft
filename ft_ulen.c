#include "libft.h"

int ft_ulen(unsigned int u) {
  int len = 0;
  unsigned int tmp = u;
  if (tmp == 0)
    len = 1;
  while (tmp != 0) {
    tmp /= 10;
    len++;
  }
  return (len);
}
