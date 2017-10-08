/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:05:44 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 17:19:04 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function toupper() converts lowercase letter to uppercase.
** Return value - The function returns uppercase equivalent to c, if such
** value exists, else c remains unchanged. The value is returned as an int
** value that can be implicitly casted to char.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
