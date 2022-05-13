/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/13 10:15:04 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		l;
	size_t	j;
	char	*ptr;

	l = 0;
	i = 0;
	if (!little[0])
		return ((char *)big);
	while (i < len)
	{
		l = 0;
		if (big[i] == little[l])
		{
			ptr = (char *)&big[i];
			j = i;
			while (big[j] == little[l] && j < len && little[l])
			{
				j++;
				l++;
			}
			if (little[l] == '\0')
				return (ptr);
		}
		i++;
	}
	return (0);
}
