/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:06:46 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/16 19:24:29 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*prev;
	t_list	*temp;
	t_list	*x;
	int		i;

	i = 0;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&x, del);
			return (NULL);
		}
		if (i == 1)
			prev->next = temp;
		else
		{
			i = 1;
			x = temp;
		}
		lst = lst->next;
		prev = temp;
	}
	return (x);
}
