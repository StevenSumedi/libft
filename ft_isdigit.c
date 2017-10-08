/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:09:15 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:29:54 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks whether c is a decimal digit character.
**
** Return value - A value different from zero (i.e., true) if indeed c is a
** digit. Zero (i.e., false) otherwise.
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
