/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:27:19 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:27:08 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string b.
**
** The memchr() function returns a pointer to the byte located, or NULL if no
** such byte exists within n bytes.
*/

#include "libft.h"

void		*ft_memchr(const void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	p;

	i = 0;
	str = (unsigned char*)b;
	p = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == p)
			return (void*)(&b[i]);
		i++;
	}
	return (NULL);
}
