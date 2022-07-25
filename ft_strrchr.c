/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_strrchr.c                               *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/25 19:56:32 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/25 19:56:35 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] != (char) c)
	{
		if (str[i] != c && i == 0)
			return (NULL);
		i--;
	}
	return (str + i);
}

