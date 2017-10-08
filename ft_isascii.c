/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:30:10 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:31:04 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks whether c is a 7-bit unsigned char value that fits into the ASCII
** character set.
**
** Return value - The isascii() function returns nonzero if c can be
** represented in the ASCII character set. Otherwise, it returns 0.
*/

int		ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}
