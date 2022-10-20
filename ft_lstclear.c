/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:19:10 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/17 12:12:00 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*prev;

	temp = *lst;
	while (temp)
	{
		prev = temp;
		temp = temp->next;
		ft_lstdelone(prev, del);
	}
	*lst = NULL;
}
// void	del (lst)
// {
// 	lst = NULL;
// }
// int main()
// {
// 	t_list	*base = ft_lstnew(ft_strdup("hello"));
// 	t_list	*node = ft_lstnew(ft_strdup("world"));
// 	t_list	*node2 = ft_lstnew(ft_strdup("kkkkk"));

// 	ft_lstadd_front(&base, node);
// 	ft_lstadd_front(&base, node2);
// 	ft_lstclear(&base, del);
// }
