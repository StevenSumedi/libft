/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:15:49 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/07 00:01:50 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatenate characters from src to dest and nul-terminate the resulting
** string. As much of src is copied into dest as there is space for.
**
** Size should be the size of the destination string buffer, dest, plus the
** space for the nul-terminator.
*/

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;
	size_t	dest_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = 0;
	if (size <= dest_length)
		return (src_length + size);
	while (dest[i] != '\0' && i < size - 1)
		i++;
	while (i < size - 1 && *src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest_length + src_length);
}
