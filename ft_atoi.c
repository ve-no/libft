/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:38:44 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/24 13:32:59 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_res(unsigned long long res, int sign)
{
	if (res >= 9223372036854775807 && sign == 1)
		return (-1);
	if (res > 9223372036854775807 && sign == -1)
		return (0);
	return ((int)res * sign);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	rslt;
	int					sign;

	i = 0;
	rslt = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10 + str[i] - 48;
		i++;
	}
	return (check_res(rslt, sign));
}

int main()
{
	printf("%d\n", ft_atoi("-2474813649"));
	printf("%d", atoi("-92233720368547758"));
}
