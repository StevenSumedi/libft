/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 14:15:54 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:08:38 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a string that need to be freed with
** free(3), then sets its pointer to NULL.
*/

#include "libft.h"
#include <stdlib.h>

void		ft_strdel(char **as)
{
	if (as != '\0')
	{
		free(*as);
		*as = NULL;
	}
}
