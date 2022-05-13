/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/13 15:59:09 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int c, size_t n)
{
	int		*s;
	int		i;

	s = (int *)p;
	printf("%d",s[0]);
	i = 0;
	while (n > 0 && s[i] != '\0')
	{
		if (s[i] == (c))
			return ((void *)s);
		i++;
		n--;
	}
	return (NULL);
}
int main(void)
{
	char *str = "bonjour";
	char ptr = 'b';
	printf("%s",ft_memchr((const void *)str,ptr,3));
	return (0);
}

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	
	p = (unsigned char *) s;
	printf("val is %c and \n",*p);
	while (n--)
	{
		if (*p == NULL)
		{
			printf("here after *p == null");
			return (NULL);
		}
		if (*p == (unsigned char) c)
		{
			printf("here after equality and p is %c",*p);
			return ((void *)p);
		}
		p++;
		n--;
	}
	printf("here after n>0");
	return (NULL);
}*/
