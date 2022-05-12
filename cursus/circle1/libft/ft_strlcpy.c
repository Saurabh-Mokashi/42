/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/12 17:57:17 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t n)
{
	size_t			i;
	unsigned int	len;

	len = ft_strlen(source);
	if (!n)
		return (len);
	i = 0;
	while (source[i] && i < n - 1)
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (len);
}	
