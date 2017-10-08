/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:55:00 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/05 16:04:18 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memccpy() function copies bytes from string src to string dest. If the
** character c (as converted to an unsigned char) occurs in the string src,
** the copy stops and a pointer to the byte after the copy of c in the string
** dest is returned. Otherwise, n bytes are copied, and a NULL pointer is
** returned.
**
** The memccpy() function copies no more than n bytes from memory area src to
** memory area dest, stopping when the character c is found. If the memory
** areas overlap, the results are undefined.
**
** The memccpy() function returns a pointer to the next character in dest
** after c, or NULL if c was not found in the first n characters of src.
*/

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*dest1;
	char		*src1;

	dest1 = (char*)dest;
	src1 = (char*)src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		if (src1[i] == c)
			return (void*)(&dest[i + 1]);
		i++;
	}
	return (NULL);
}
