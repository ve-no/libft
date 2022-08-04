/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_strtrim.c                               *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/08/03 17:55:59 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/08/03 17:56:02 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)s1;
	len = (int)strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (ptr[len] == ' ' || ptr[len] == '\t' || ptr[len] == '\n'
		|| ptr[len] == '\v' || ptr[len] == '\f' || ptr[len] == '\r')
		len--;
	while (ptr[i] == ' ' || ptr[i] == '\t' || ptr[i] == '\n'
		|| ptr[i] == '\v' || ptr[i] == '\f' || ptr[i] == '\r')
		i++;
	ptr = ft_substr(s1, i, len - i + 1);
	return ptr;
}
// int main()
// {
// 	char s1[] = "      hello f da world     	";
// 	char *set;
// 	printf(":%s:\n", ft_strtrim(s1, set));
// }
