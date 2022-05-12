/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/12 18:12:54 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	charcheck(char c)
{
	if (c!='\0')
		return (c - 'a');
	else
		return (0);
}
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int p1;
	int p2;

	i = 0;
	while (n--)
	{	
		//p1 = s1[i] != '\0'?s1[i]:NULL;
		//p2 = s2[i] != '\0'?s2[i]:NULL;
		p1 = charcheck(s1[i]);
		p2 = charcheck(s2[i]);
		if (p1 != p2)
			return (p1 - p2);
		i++;
	}
	return (0);
}
