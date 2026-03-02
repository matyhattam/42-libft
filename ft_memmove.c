#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
  if (src > dest) {
    dest = ft_memcpy(dest, src, n);
  } else {
    while (n != 0) {
      n--;
      ((char *)dest)[n] = ((char *)src)[n];
    }
  }

  return (dest);
}
