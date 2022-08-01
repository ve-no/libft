/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_substr.c                                *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/08/01 19:52:51 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/08/01 19:52:53 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		j;

	j =  0;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	len = start + (unsigned int)len;
	while (start < (unsigned int)len && (char)s[start] != '\0')
		str[j++] = (char)s[start++];
	str[j] = '\0';
	return (str);
}
int main()
{
	char src[] = "substr function Implementation";

	int m = 9;
	int n = 10;

	char* dest = ft_substr(src, m, n);

	printf("%s\n", dest);

	return 0;
}
