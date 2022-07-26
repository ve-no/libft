/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_memset.c                                *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/25 13:40:51 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/25 13:40:54 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n--)
	{
		*p = (char)c;
		p++;
	}
	return (p);
}

int	main(void)
{
	char	*arr;
	int		n;
	int		i;

	arr = malloc(1);
	n = 5;
	i = 0;
	ft_memset (arr, 2, n * sizeof(arr[0]));
	printf("Array after memset()\n");
	while (i < n)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}
