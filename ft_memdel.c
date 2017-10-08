/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 11:05:28 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:22:33 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a memory area that needs to be freed
** with free(3), then puts the pointer to NULL.
*/

#include "libft.h"
#include <stdlib.h>

void		ft_memdel(void **ap)
{
	if (ap != '\0')
	{
		free(*ap);
		*ap = NULL;
	}
}
