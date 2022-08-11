/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_strlcat.c                               *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/27 21:13:48 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/27 21:13:52 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	res;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
		res = dest_len + src_len;
	else
		res = src_len + size;
	while (src[i] && (dest_len + 1) < size)
		dest[dest_len++] = src[i++];
	dest[dest_len] = 0;
	return (res);
}
// int	main(void)
// {
// 	char	dest[] = "hello dest";
// 	char	src[]= "world ";

// 	printf("%ld \n", ft_strlcat(dest, src, 12));
// 	printf("%s\n", dest);
// }
