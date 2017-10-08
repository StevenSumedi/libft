/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 11:27:41 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/06 17:02:58 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character c to the standard output.
**
** Return value - none.
*/

#include "libft.h"
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
