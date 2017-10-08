/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:54:06 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/06 17:20:34 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Strdup() reserves storage space for a copy of string by calling malloc.
** The string argument to this function is expected to contain a null
** character ('\0') marking the end of the string. Remember to free the
** storage reserved with the call to strdup.
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*strdup;

	i = 0;
	len = ft_strlen((char*)str);
	strdup = ((char*)malloc(sizeof(*str) * (len + 1)));
	if (!strdup)
		return (NULL);
	while (i <= len)
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
