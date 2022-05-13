/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:43:42 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/13 15:38:47 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rec(long int n, int fd)
{
	if (n >= 10)
		rec(n / 10, fd);
	ft_putchar_fd(((long int)n % 10) + '0', fd);
}

void	ft_putnbr_fd(int p, int fd)
{
	long int	n;

	if (p < 0)
	{
		if (p == -2147483648)
		{
			write (fd, "-2147483648", 11);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = (long int)(-1 * p);
	}
	else
		n = (long int)(p);
	rec(n, fd);
}
