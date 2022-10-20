/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:46:34 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/17 18:58:56 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;
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
void    ft_lstadd_front(t_list **lst, t_list *new)
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
void del(void *lst){
  lst = NULL;}


t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *new;
    t_list    *base;

    if (!lst || !f || !del)
        return (NULL);
    new = ft_lstnew(f(lst->content));
    base = new;
    lst = lst-> next;
    while (lst)
    {
        new->next = ft_lstnew(f(lst->content));
        if (!new)
        {
            ft_lstclear(&base, del);
            return (NULL);
        }
        lst = lst->next;
        new = new->next;
    }
    new->next = NULL;
    return (base);
}

void fun (void *lst)
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

  t_list *mapi = ft_lstmap(base, fun, del);

  // ft_lstdelone(base,del);
  while (mapi)
  {
    printf("%s\n", mapi->content);
    mapi = mapi->next;
  }
  return 0;
}
