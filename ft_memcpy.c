/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_memcpy.c                                *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/25 22:44:57 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/25 22:45:03 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *) src;
	d = (char *) dest;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char	dest[] = "world";
// 	char	src[] = "hello world";
// 	size_t    n;

// 	size_t i = 2;
// 	// ft_memcpy(dest, src, i);
// 	printf("%s\n", ft_memcpy(dest, src, i));
// 	// memcpy(dest, src, i);
// 	printf("%s\n", dest);

// }
