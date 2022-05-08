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
int ft_atoi(char *str)
{
	int i=0;
	int sign=1;
	int num=0;
	while(str[i]==' '|| str[i]=='\t' || str[i]=='\r' ||str[i]=='\n'||str[i]=='\v' ||str[i]=='\f')
		i++;
	if(str[i]=='-'||str[i]=='+')
	{
		if(str[i]=='-')
			sign=-1;
		else
			sign=1;
		i++;
	}
	while(str[i]>='0'&&str[i]<='9')
	{
		num=num*10 + (str[i]-'0');
		i=i+1;
	}
	return num*sign;
}

int main()
{
	printf("Enter the string ");
	char temp[20];
	scanf("%s",temp);
	printf("The value is %d\n",ft_atoi(temp));
	
}
