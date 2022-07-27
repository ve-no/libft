/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_strlcpy.c                               *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/27 20:04:46 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/27 20:04:47 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	str_len;
	size_t	i;

	str_len = strlen(src);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
		dest[i] = src[i++];
	dest[i] = '\0';
	return (str_len);
}

// int	main(void)
// {
// 	char	dest[] = "hello";
// 	char	src[]= "hello";

// 	printf("%ld \n", ft_strlcpy(dest, src, 5));
// 	printf("%s\n", dest);
// }
