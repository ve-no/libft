/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:32:52 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/20 11:54:06 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst && new)
		new -> next = *lst;
	if (new)
		*lst = new;
}
int main()
{
	t_list *base = ft_lstnew("hello");
	t_list *node1 = ft_lstnew("jumia");
	t_list *node2 = ft_lstnew("abcd");
	t_list *node3 = ft_lstnew("asdf");

	ft_lstadd_back(&base, node1);
	ft_lstadd_back(&base, node2);
	ft_lstadd_back(&base, node3);
	while (base)
	{
		printf("%s\n", base -> content);
		base = base -> next;
	}

}
