/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/12 17:58:16 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t dlen;
	size_t slen;
	size_t i;

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
