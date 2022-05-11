/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2020/04/14 18:13:45 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_size(int n)
{
    int i;
    i = 0;
    while (n)
    {
        i++;
        n /= 10;
    }
    return (i);
}
int signchecker(char *ptr, int size, int sign)
{
    if (sign == -1)
    {
        ptr[0] = '-';
        ptr[size+1] = '\0';
    }
    else
    {
        ptr[size] = '\0';
        size = size - 1;
    }
    return (size);//return sign==-1?size:size-1
}
char *ft_itoa(int n)
{
    char *ptr;
    int sign;
    int size; 

    sign = 1;
    size = ft_size(n);
    if (n < 0)
        sign = -1;
    ptr = sign == -1?(char*)malloc((char*)*(size+2)):(char*)malloc((char*)*(size+1));
    if (!ptr)
        return (NULL);
    nsize = signchecker(ptr, size, sign);
    while (nsize > 0)
    {
        ptr[nsize] = n % 10;
        nsize--;
        n /= 10;
    }
    if (sign == 1)
        ptr[nsize] = n;
    return (ptr);
}
