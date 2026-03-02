#include "libft.h"

char *ft_strrchr(const char *s, int c) {
  size_t str_len = ft_strlen(s);

  while (str_len != 0) {
    if (s[str_len] == c) {
      return ((char *)&s[str_len]);
    }
    str_len--;
  }

  return 0;
}

int main() {
  char *s = "bonjour";
  char *rest = ft_strrchr(s, 's');

  printf("%s", rest);
}
