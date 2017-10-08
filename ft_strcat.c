/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:12:48 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/07 00:56:30 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strcat() function concatenates src to dest and ends the resulting
** string with the null character.
**
** The strcat() function operates on null-ended strings. The string arguments
** to the function should contain a null character ('\0') that marks the end
** of the string. No length checking is performed.
*/

char	*ft_strcat(char *dest, const char *src)
{
	int		len;
	int		i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
