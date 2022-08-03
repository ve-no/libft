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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		k;

	k = strlen(s1) + strlen(s2) +1 ;
	str = (char *)malloc(k);
	if (!str)
		return (NULL);
	str = strdup(s1);
	i = 0;
	k = 0;
	while (i < (int)strlen(s1))
		str[k++] = s1[i++];
	i = 0;
	while (i < (int)strlen(s2))
		str[k++] = s2[i++];
	str[k] = '\0';
	return (str);
}
// int main()
// {
// 	printf(":%s:\n", ft_strjoin("helo, world!", "ksjghks"));
// }
