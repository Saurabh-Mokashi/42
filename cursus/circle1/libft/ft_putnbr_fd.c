/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:43:42 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/10 13:44:28 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rec(int n, int fd)
{
	if (n >= 10)
		rec(n / 10, fd);
	ft_putchar_fd(char (n % 10 + '0'), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	rec(n, fd);
}
