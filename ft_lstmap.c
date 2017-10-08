/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:25:31 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/05 16:18:02 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*curr;
	t_list	*save;

	if (lst && f)
	{
		curr = (t_list*)malloc(sizeof(t_list));
		curr = f(lst);
		save = curr;
		tmp = lst->next;
		while (tmp != NULL)
		{
			new = (t_list*)malloc(sizeof(t_list));
			new = f(tmp);
			tmp = tmp->next;
			curr->next = new;
			curr = curr->next;
			new = NULL;
		}
		return (save);
	}
	return (lst);
}
