#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dest, void const *src, size_t n);

void *ft_memmove(void *dest, const void *src, size_t n) {
  if (src > dest) {
    dest = ft_memcpy(dest, src, n);
  } else {
    while (n != 0) {
      ((char *)dest)[n] = ((char *)src)[n];
      n--;
    }
  }

  return (dest);
}
