/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_strnstr.c                               *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/27 22:54:23 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/27 22:54:26 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const	char *haystack, const	char *needle, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	n_len;
	char	*hay;

	i = 0;
	n_len = strlen(needle);
	hay = (char *)haystack;
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] && i < len)
	{
		a = 0;
		while (hay[a + i] && needle[a] && i + a < len
			&& hay[a + i] == needle[a])
			a++;
		if (a == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}

// int main() {
//   char *hay = "hello world ana jay";
//   char *nee = "world";
//   printf("%s", ft_strnstr(hay, nee, 12));

//   return 0;
// }
