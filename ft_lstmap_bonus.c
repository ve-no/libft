/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:57:30 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/21 22:58:45 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*base;

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

// void	*fun (void *lst)
// {
// 	int i = 0;
// 	char	*str;
// 	str = (char *) lst;
// 	while(str[i]){
// 		str[i] = str[i] - 32;
// 		i++;
// 	}
// 	return (str);
// }


// int	main ()
// {
// 	t_list	*head = ft_lstnew(ft_strdup("helloworld"));
// 	t_list	*node1 = ft_lstnew(ft_strdup("hello1"));
// 	t_list	*node2 = ft_lstnew(ft_strdup("hello2"));
// 	t_list	*node3 = ft_lstnew(ft_strdup("hello3"));
// 	t_list	*mapi;

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	// printf("%s\n", ft_lstlast(head)->content);
// 	// printf("%d\n", ft_lstsize(head));
// 	// while (head)
// 	// {
// 	// 	printf("%s\n", head->content);
// 	// 	head = head->next;
// 	// }

// 	mapi = ft_lstmap(head, fun, free);
// 	printf("%p\n", mapi);
// 	// while (mapi)
// 	// {
// 	// 	printf("%s\n", mapi->content);
// 	// 	mapi = mapi->next;
// 	// }
// }
