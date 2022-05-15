/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/15 18:47:53 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	printf("\ndlen is %zu",dlen);
	printf("dst is %s",dst);
	printf("\nn is %zu",n);
		printf("src is %s",src);
	printf("\nslen is %zu",slen);
	i = 0;
	if (n == 0)
	{
		return (dlen + n);
	}
	while (dlen + i + 1 < n && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen+i] = '\0';
	printf("\nchar * is %s",dst);

	return (dlen+n);
}
int main(void)
{
	char	*dest;

	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[10] = 'a';
	printf("\n val is %s",dest);
	printf("\n%zu",ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
	write(1, "\n", 1);
	write(1, dest, 15);
	return (0);
}
