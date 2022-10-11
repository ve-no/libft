/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:40:51 by ael-b             #+#    #+#             */
/*   Updated: 2022/10/11 10:47:55 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = (char)c;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	char	*arr;
// 	int		n;
// 	int		i;

// 	arr = malloc(1);
// 	n = 5;
// 	i = 0;
// 	ft_memset (arr, 2, n * sizeof(arr[0]));
// 	printf("Array after memset()\n");
// 	while (i < n)
// 	{
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
