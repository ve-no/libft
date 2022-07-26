/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_bzero.c                                 *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/26 18:33:29 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/26 18:33:33 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main(void)
// {
// 	int i = 0;
// 	int n = 12;
// 	char	s[n];

// 	ft_bzero(s, n);
// 	while (i < n)
// 	{
// 	printf("%d\n", s[i]);
// 	i++;
// 	}
// }
