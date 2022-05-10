/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:39:18 by smokashi          #+#    #+#             */
/*   Updated: 2022/05/10 16:58:52 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	change(temp, del);
}

void	change(t_list *ptr, void (*del)(void *))
{
	if (ptr->next != NULL)
		change(ptr->next, del);
	ft_lstdelone(ptr, del);
}
