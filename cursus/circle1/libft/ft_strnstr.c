/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/15 21:00:03 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*biglittle(const char *big, const char *little, size_t len, size_t i)
{
	char	*ptr;
	size_t	l;

	ptr = (char *)&big[i];
	l = 0;
	while (big[i] == little[l] && i < len && little[l])
	{
		i++;
		l++;
	}
	if (little[l] == '\0')
		return (ptr);
	else
		return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		l;
	char	*ptr;

	l = 0;
	i = 0;
	if (!little[0])
		return ((char *)big);
	while (i < len)
	{
		if (!big[i])
			return (NULL);
		if (big[i] == little[0])
		{
			ptr = biglittle(big, little, len, i);
			if (ptr != NULL)
				return (ptr);
		}
		i++;
	}
	return (NULL);
}
