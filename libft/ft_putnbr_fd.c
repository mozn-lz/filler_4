/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 13:07:39 by msefako           #+#    #+#             */
/*   Updated: 2018/06/04 19:35:08 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	div;
	char	c;
	long	l_n;

	l_n = (long)n;
	div = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		l_n *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	while (div <= l_n)
		div *= 10;
	div /= 10;
	while (div != 0)
	{
		c = (l_n / div) + '0';
		ft_putchar_fd(c, fd);
		l_n %= div;
		div /= 10;
	}
}
