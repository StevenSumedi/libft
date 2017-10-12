/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:55:00 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/09 23:32:47 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The memccpy() copies bytes from memory area src into dest, stopping
**	after the first occurrence of c has been copied, or after n bytes have
**	been copied, whichever comes first.
**
**	Returns a pointer to the first byte after c in dest or, if c was not
**	found in the first n bytes of dest, it returns a null pointer.
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
