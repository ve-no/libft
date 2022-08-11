/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_memcmp.c                                *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/27 13:38:40 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/27 13:38:43 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (0);
}
// int main()
// {
// char csrc[] = "GeeksforGeeks";
// char cdest[] = "5656";

//     printf("%d ", ft_memcmp(cdest, csrc, strlen(csrc) - 1));
// return 0;
// }
