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

#include <stdio.h>

size_t ft_strlcpy(char *destination, const char *source, size_t n)
{
	int i;
	unsigned int len;
	len=ft_strlen(source);
	if(!n)
		return len;
	i=0;
	while(source[i] && i<n-1)
	{
		destination[i]=source[i];
		i++;
	}
	destination[i]='\0';
	return len;
}	
