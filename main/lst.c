#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;
// ************************************************
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
void      ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst && new)
        new -> next = *lst;
    if (new)
        *lst = new;
}
void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content);
    free(lst);
}

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list    *temp;
    t_list    *prev;

    temp = *lst;
    while (temp)
    {
        prev = temp;
        temp = temp->next;
        ft_lstdelone(prev, del);
    }
    *lst = NULL;
}
void    del (void *lst)
{
    lst = NULL;
}
int main()
{
    t_list    *base = ft_lstnew(strdup("hello"));
    t_list    *node = ft_lstnew(strdup("world"));
    t_list    *node2 = ft_lstnew(strdup("kkkkk"));

    ft_lstadd_front(&base, node);
    ft_lstadd_front(&base, node2);
    ft_lstclear(&base, del);
}
