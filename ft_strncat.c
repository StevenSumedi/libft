/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:34:35 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/07 01:02:37 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncat() function appends the first count characters of src to
** string1 and ends the resulting string with a null character ('\0'). If
** count is greater than the length of string2, the length of string2 is used
** in place of count.
**
** The strncat() function operates on null-ended strings. The string argument
** to the function should contain a null character ('\0') marking the end of
** the string.
*/

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		p;

	i = 0;
	p = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[p] != '\0') && (n > 0))
	{
		dest[i] = src[p];
		i++;
		p++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
