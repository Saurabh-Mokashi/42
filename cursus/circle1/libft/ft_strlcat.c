/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2020/04/14 18:13:45 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	int dlen;
	int slen;
	int i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	while (dlen + i + 1<n && src[i] != '\0')
	{
		dst[dlen + i]=src[i];
		i++;
	}
	dst[i] = '\0';
	return (dlen+slen);
}
