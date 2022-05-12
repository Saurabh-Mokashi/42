/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/12 19:19:57 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	char	*s1;
	char	*s2;
	char	*tmp;
	size_t	i;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	tmp = malloc(sizeof(char *) *(n + 1));
	while (i < n)
	{
		tmp[i] = s2[i];
		i++;
	}
	tmp[i] = '\0';
	i = 0;
	while (tmp[i] != '\0')
	{
		s1[i] = tmp[i];
		i++;
	}
	free(tmp);
	return ((void *)s1);
}
