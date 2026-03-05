#include "libft.h"

char **ft_split(char *str, char c) {
  char **split = malloc(sizeof(char *) * (ft_strlen(str) + 1));
  int i = 0;
  int j = 0;
  int k = 0;

  int str_len = ft_strlen(str);
  int split_len = 0;

  while (i <= str_len) {
    int l = 0;
    if (i == str_len || str[i] == c) {
      if (i - j > 0) {
        split_len = i;

        split[k] = malloc(sizeof(char) * (i - j + 1));

        while (j < split_len) {
          split[k][l] = str[j];
          j++;
          l++;
        }
        split[k][l] = '\0';
        j++;
        k++;
      } else {
        j++;
      }
    }
    i++;
  }

  split[k] = NULL;
  return split;
}
