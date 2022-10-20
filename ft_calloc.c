/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:29:10 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/20 11:34:32 by ael-bako         ###   ########.fr       */
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
	ptr = malloc(size * count);
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
// 	char	*ptr;
// 	ptr = "hello world";
// 	ptr = (char *)ft_calloc(SIZE_MAX  , SIZE_MAX);
// 	printf("%s\n", ptr);
// }
