/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_strjoin.c                               *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/08/01 20:27:59 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/08/01 20:28:02 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len_s1;
	int		len_s2;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	str = (char *)malloc( len_s1 + len_s2 + 1);
	str = strdup(s1);
	i = 0;
	while (i < len_s2)
		str[len_s1++] = s2[i++];
	str[len_s1++] = '\0';
	return str;
}
int main()
{
	printf(":%s:\n", ft_strjoin("helo, world!", "ksjghks"));
}

