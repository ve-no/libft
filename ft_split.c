/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:40:38 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/10 14:05:18 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	count_w(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 1;
	len = strlen(s) -1;
	while (s[i] == c)
		i++;
	while (s[len] == c)
		len--;
	while (s[i] && i < len)
	{
		if (s[i] == c && s[i + 1] != c)
		{
			j++;
			i++;
		}
		i++;
	}
	return (j);
}

char	*w_dup(char const *s, int start, int fin)
{
	int		i;
	char	*str;

	str = malloc((fin - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < fin)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		start;
	int		j;

	i = 0;
	j = 0;
	start = -1;
	ptr = malloc((count_w(s, c) + 1) * sizeof(char *));
	if (!s || !ptr)
		return (NULL);
	while (i <= (int)strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == (int)strlen(s)) && start >= 0)
		{
			ptr[j++] = w_dup(s, start, i);
			start = -1;
		}
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}
// int	main() {
//   char		**ptr;
//   size_t	i;
//   ptr = ft_split("cccchellocccworldccccjumiaccccc.macccaji",'c');
//   for (i = 0; i < 4; i++)
//     printf("%s\n", ptr[i]);
//   return 0;
// }
