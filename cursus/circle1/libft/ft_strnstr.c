* ************************************************************************** */
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

#include <stdio.h>

char *strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int l;
	int j;
	l=0;
	i=0;
	if(!little[0])
		return big;
	while(i<len)
	{
		l=0;
		if(big[i]==little[l])
		{
			char *ptr;
			ptr=&big[i];
			j=i;
			while(big[j]==little[l] && j<len && little[l])
			{
				j++;
				l++;
			}
			if(little[l]=='\0')
				return ptr;
		}
		i++;
	}
	return 0;
}
							
