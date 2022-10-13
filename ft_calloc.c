/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:29:10 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/10 11:22:16 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	size = size * count;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	while (size > i)
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
// int	main()
// {
// 	char	str[] = "hello world";
// 	char	*ptr;
// 	ptr = "hello world";
// 	ptr = (char *)ft_calloc(5, 1);
// 	printf("%lu\n", strlen(ptr));
// }
