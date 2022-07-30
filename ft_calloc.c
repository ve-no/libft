/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_calloc.c                                *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/28 18:30:57 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/28 18:31:00 by ael-b      *      :#    #: #  ::#####    */
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
	size = size * count;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	while (size > i)
		*(char *)(ptr + i++) = 0;
	return (ptr);
}
// int	main()
// {
// 	char	str[] = "hello world";
// 	char	*ptr;
// 	ptr = "hello world";
// 	ptr = (char *)ft_calloc(5, sizeof(int));
// 	printf("%ld\n", strlen(ptr));
// }
