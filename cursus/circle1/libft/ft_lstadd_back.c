/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:29:13 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/10 15:25:17 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newt;

	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	newt = ft_lstlast(*lst);
	newt->next = new;
}
