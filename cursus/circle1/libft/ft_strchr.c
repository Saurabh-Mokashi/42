/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/18 15:12:01 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	i = 0;
	ptr = s;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)ptr);
		}
		i++;
		ptr++;
	}
	if (*ptr == c)
		return ((char *)ptr);
	return (NULL);
}
