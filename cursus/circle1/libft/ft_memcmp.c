/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:27:00 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/17 19:01:42 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int chartoint(char c)
// {
// 	if(c == NULL)
// 		return 0;
// 	else
// 		return 
// }
int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	i = 0;
	s1 = (unsigned char *)p1;
	s2 = (unsigned char *)p2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (0);
}
