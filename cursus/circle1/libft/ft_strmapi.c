/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:13:28 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/18 14:17:36 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		sz;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	sz = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) *(sz + 1));
	if (!ptr)
		return (NULL);
	if (!f)
		return ((char *)s);
	while (i < sz)
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
