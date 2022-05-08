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

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int l;
	int r;
	l=0;
	r=0;
	i=0;
	int len;
	len=ft_strlen(s1)+ft_strlen(s2);
	str=malloc(len+1);
	if(!str)
		return NULL;
	while(s1[l]!='\0')
		str[i++]=s1[l++];
	while(s2[r]!='\0')
		str[i++]=s2[r++];
	str[i]='\0';
	return str;
}
