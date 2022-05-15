/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:27:00 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/15 16:50:39 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	char	*s1;
	char	*s2;
	int		i;

	i = 0;
	s1 = (char *)p1;
	s2 = (char *)p2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (!s1[i] || !s2[i])
			break ;
		if (s1[i] != s2[i])
			return ((int)s1[i] - s2[i]);
		i++;
		n--;
	}
	if (s1[i] && !s2[i])
		return (1);
	else if (!s1[i] && s2[i])
		return (-1);
	return (0);
}
