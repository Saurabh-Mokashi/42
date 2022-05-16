/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/16 14:50:27 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	signchecker(char *ptr, int size, int sign)
{
	if (sign == -1)
	{
		ptr[0] = '-';
		ptr[size + 1] = '\0';
	}
	else
	{
		ptr[size] = '\0';
		size = size - 1;
	}
	return (size);
}

char	*charcheck(int size, int sign)
{
	char	*ptr;

	if (sign == -1)
		ptr = (char *)malloc(sizeof(char *) * (size + 2));
	else
		ptr = (char *)malloc(sizeof(char *) * (size + 1));
	return (ptr);
}

int	origsign(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		sign;
	int		size;
	int		nsize;

	sign = 1;
	size = ft_size(n);
	if (n < 0)
		sign = -1;
	ptr = charcheck(size, sign);
	if (size == 0)
		return (ptr);
	if (!ptr)
		return (NULL);
	nsize = signchecker(ptr, size, sign);
	while (nsize > 0)
	{
		ptr[nsize] = origsign(n % 10) + '0';
		nsize--;
		n /= 10;
	}
	if (sign == 1)
		ptr[nsize] = n + '0';
	return (ptr);
}
