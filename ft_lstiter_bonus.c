/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:33:31 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/21 23:33:01 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void	fun(void *lst)
// {
// 	int i = 0;
// 	char *str;

// 	str = (char *)lst;
// 	while (str[i])
// 	{
// 		str[i] = str[i] - 32;
// 		i++;
// 	}
// }
// int main()
// {
// 	t_list	*head = ft_lstnew(ft_strdup("helloworld"));
// 	t_list	*node1 = ft_lstnew(ft_strdup("hello1"));
// 	t_list	*node2 = ft_lstnew(ft_strdup("hello2"));
// 	t_list	*node3 = ft_lstnew(ft_strdup("hello3"));

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);

// 	ft_lstiter(head, NULL);
// 	while (head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}

// }
