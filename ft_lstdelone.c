#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *)) {
  t_list *current = lst;

  lst = lst->next;
  del(current->content);
  free(current);
}
