/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_itoa.c                                  *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/08/11 17:58:10 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/08/11 17:58:15 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	size(int n)
{
	int		count;
	long	res;

	res = n;
	count = 1;
	if (res < 0)
	{
		res *= -1;
		count++;
	}
	while (res >= 10)
	{
		res /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		i;
	long	res;

	i = 0;
	res = n;
	arr = malloc(size(n) + 1);
	if (!arr)
		return (NULL);
	if (n < 0)
	{
		arr[0] = '-';
		res *= -1;
	}
	arr[size(n) - i++] = '\0';
	while (res >= 10)
	{
		arr[size(n) - i++] = (res % 10) + '0';
		res /= 10;
	}
	arr[size(n) - i++] = (res % 10) + '0';
	return (arr);
}
// int main()
// {
// 	printf("%s\n", ft_itoa(4));
// }
