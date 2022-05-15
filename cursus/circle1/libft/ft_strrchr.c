/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/15 19:38:57 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*ptr;

	i = ft_strlen(s);
	ptr = &s[i];
	while (i > 0)
	{
		if (s[i] == c)
		{
			return ((char *)ptr);
		}
		i--;
		ptr--;
	}
	if (s[i] == c)
		return ((char *)ptr);
	return (NULL);
}
