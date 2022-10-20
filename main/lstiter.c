#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst && new)
        new -> next = *lst;
    if (new)
        *lst = new;
}




t_list    *ft_lstnew(void *content)
{
    t_list    *lnew;

    lnew = (t_list *)malloc(sizeof(t_list));
    if (!lnew)
        return (NULL);
    lnew -> content = content;
    lnew -> next = NULL;
    return (lnew);
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst-> next;
    }
}
void fun(void *lst)
{
  char *str;
  str = (char *)lst;
  while(*str)
  {
    *str = *str - 32;
    str++;
  }
}
int main() {
  t_list *base = ft_lstnew(strdup("hello"));
  t_list *node = ft_lstnew(strdup("allal"));
  t_list *node2 = ft_lstnew(strdup("elbakouri"));
  ft_lstadd_front(&base, node);
  ft_lstadd_front(&base, node2);

  ft_lstiter(base, fun);
  while (base)
  {
    printf("%s\n", base->content);
    base = base->next;
  }
  return 0;
}
