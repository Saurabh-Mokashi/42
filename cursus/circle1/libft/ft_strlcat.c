/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/17 15:20:35 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	index;
	size_t	len;

	dest_len = 0;
	src_len = 0;
	index = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	src_len = ft_strlen(src);
	len = src_len + dest_len;
	if (size == dest_len)
		return (len);
	while (src[index] != '\0' && (dest_len + index) < (size - 1))
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (len);
}
