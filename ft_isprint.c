/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:58:08 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:30:28 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function isprint() checks whether the passed character is printable.
** A printable character is a character that is not a control character.
**
** Return value - The function returns a non-zero value (true) if c is a
** printable character, zero (false).
*/

#include "libft.h"

int		ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}
