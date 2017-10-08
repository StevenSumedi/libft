/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 22:10:36 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/06 15:39:10 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memmove() function copies n bytes from string s2 to string s1. The
** two strings may overlap; the copy is always done in a non-destructive
** manner.
**
** The memmove() function returns the original value of dest.
*/

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*src;
	char		*dest;

	src = s2;
	dest = s1;
	if (dest < src)
		ft_memcpy(dest, src, n);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			dest[i - 1] = src[i - 1];
			i--;
		}
	}
	return (s1);
}
