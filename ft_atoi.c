#include "libft.h"

int ft_atoi(char *nstr) {
  int i = 0;
  int to_int = 0;
  int sign = 1;

  while ((nstr[i] >= 9 && nstr[i] <= 13) || nstr[i] == ' ')
    i++;

  if (nstr[i] == '+' || nstr[i] == '-') {
    if (nstr[i] == '-') {
      sign = -1;
    }
    i++;
  }
  while (nstr[i] >= '0' && nstr[i] <= '9') {
    to_int = to_int * 10 + nstr[i] - '0';
    i++;
  }
  return to_int * sign;
}

// int main(void) {
//   char *str = "\n\n\n  -46\b9 \n5d6";
//   int nb = ft_atoi(str);

//   printf("%d", nb);
// }
