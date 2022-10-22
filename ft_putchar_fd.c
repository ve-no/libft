/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:47:09 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/21 23:57:35 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int main()
{
	int i = 0;
	int fd = open("test.txt",  O_WRONLY);
	while(i < 127){
		ft_putchar_fd(0 + i,fd);
		i++;
	}
	// printf("%d/n", fd);
}
