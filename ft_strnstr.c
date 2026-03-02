#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n) {
  if (ft_strlen(needle) == 0) {
    return ((char *)haystack);
  }

  size_t i = 0;
  while (haystack[i] != '\0' && i < n) {
    char *mark;
    int j = 0;
    if (haystack[i] == needle[j]) {
      mark = ((char *)&haystack[i]);
      while (i + j < n && haystack[i + j] == needle[j]) {
        j++;
        if (needle[j] == '\0') {
          return (mark);
        }
      }
    }
    i++;
  }
  return 0;
}
