/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:35:29 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/14 17:00:31 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	fun(unsigned int i, char *s)
{
	*s -= 32;
}

#include <stdio.h>

int	main()
{
	char *str;
	int *p;

	char	s[] = "elbakouri";
	ft_striteri(s, fun);
	printf("%s", s);
}
