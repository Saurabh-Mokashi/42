/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:27:11 by jwon              #+#    #+#             */
/*   Updated: 2022/05/16 19:51:28 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	//printf("\ndlen is %zu",dlen);
	//printf("dst is %s",dst);
	//printf("\nn is %zu",n);
	//printf("src is %s",src);
	//printf("\nslen is %zu",slen);
	index = 0;
	if (n == 0)
		return (src_len);
	if (n < dest_len)
		src_len += n;
	else
		src_len += dest_len;
	while (src[index] != '\0' && (dest_len + index) < (n - 1))
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (src_len);

}
int main(void)
{
	char	*dest;

	dest = (char *)malloc(sizeof(*dest) * 15);
	//memset(dest, 0, 15);
	//memset(dest, 'r', 6);
	memset(dest, 'r', 15);
	printf("%d",ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	//dest[10] = 'a';
	//printf("\n val is %s",dest);
	//printf("\n%zu",ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
	write(1, "\n", 1);
	write(1, dest, 15);
	return (0);
}
