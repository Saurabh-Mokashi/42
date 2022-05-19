/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/18 18:24:22 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	int		r;

	l = 0;
	if (!s1 || !set)
		return ((char *)ft_calloc(1, 1));
	l = 0;
	r = ft_strlen(s1);
	while (s1[l] && ft_strchr(set, s1[l]))
		l++;
	if (!s1[l])
		return ((char *)ft_calloc(1, 1));
	r = ft_strlen(s1);
	while (ft_strchr(set, s1[r]))
		r--;
	if (!s1[r] || l > r)
		return ((char *)ft_calloc(1, 1));
	return ((char *)ft_substr(s1, l, r - l + 1));
}
