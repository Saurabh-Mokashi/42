/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/12 19:09:15 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int getwords(char *s,char c)
{
    int i;
    int word;

    i=0;
    word=0;
    /*if(word[i]==c)
        word--;
    */
    while (s[i])
    {
        if (s[i] == c && s[i+1] != c)//s[i+1]!='\0'
            word++;    
        i++;
    }
    //word++;
    return (word);
}
char    *memalloc(char *s,char c)
{
    int i;
    char *ptr;

    i=0;
    while (s[i] && s[i] != c)
        i++;
    ptr = malloc (sizeof(char *) * (i + 1));
    if (!ptr)
        return (NULL);
    i = 0;
    while (s[i] && s[i] != c)
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

char    **ft_split(char const *p, char c)
{
    char **str;
    int i;
    char *s;

    i = 0;
    s = (char *)p;
    if (!s)
        return (NULL);
    int word = getwords(s,c);
    str = (char**)malloc (sizeof(char*) * (word + 1));
    if (!str)
        return (NULL);
    while (*s)
    {
        while (*s && *s == c)
            s++;
        while (*s && *s != c)//or if, check for tle here
        {
            str[i] = memalloc(s, c);
            i++;
            while (*s && *s != c)
                s++;
        }
    }
    str[i] = NULL;
    return (str);
}