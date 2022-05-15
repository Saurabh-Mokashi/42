/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/15 21:46:09 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	int		r;
	char	*ptr;

	ptr = "";
	l = 0;
	while (s1[l] && ft_strchr(set, s1[l]))
		l++;
	if (!s1[l])
		return (ptr);
	r = ft_strlen(s1);
	while (ft_strchr(set, s1[r]))
		r--;
	if (!s1[r])
		return (ptr);
	return (ft_substr(s1, l, r - l + 1));
}	
/*int main()
{
	char s1[] = "          ";
	printf("%s",ft_strtrim(s1, " "));
	return (0);
}*/
