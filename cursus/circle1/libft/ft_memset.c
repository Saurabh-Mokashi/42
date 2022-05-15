/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:16:20 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/15 17:16:37 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, int freq)
{
	unsigned char	*p;

	p = str;
	while (freq > 0)
	{
		*p = ch;
		p++;
		freq--;
	}
	return (str);
}
