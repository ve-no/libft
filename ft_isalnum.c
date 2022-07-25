/* ************************************************************************** */
/*                                                                            */
/*                                              *       ::##::  #  ::#####    */
/*   ft_isalnum.c                               *      ::    :: . ::          */
/*                                              *      ::    :: . ::          */
/*   By: ael-bako <ael-bako@outlook.com>        *      ::####:: # ::####      */
/*                                              *      :#    #: . ::          */
/*   Created: 2022/07/24 23:00:07 by ael-b      *      #:    :# . ::          */
/*   Updated: 2022/07/24 23:11:30 by ael-b      *      :#    #: #  ::#####    */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A' || c <= '9' && c >= '0')
		return (1);
	return (0);
}
