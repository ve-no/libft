/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:14:29 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/24 12:19:41 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	str_len;
	size_t	i;

	i = -1;
	str_len = ft_strlen(src);
	if (size > 0)
	{
		while (++i < size - 1 && src[i])
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (str_len);
}
