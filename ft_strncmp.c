/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_strncmp.c                               *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/26 17:11:50 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/26 17:11:52 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char	s1[] = "hello world";
// 	char	s2[] = "hff";
// 	size_t	i = 4;
// 	printf("%d\n", strncmp(s1, s2, i));

// }
