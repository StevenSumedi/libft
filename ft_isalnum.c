/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:18:54 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:33:12 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks whether c is alphanumeric,  either a decimal digit or an
** uppercase/lowercase letter.
**
** Return value - This function returns non-zero value if c is a digit or a
** letter, else it returns 0.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
