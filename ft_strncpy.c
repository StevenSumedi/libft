/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:14:36 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 17:44:01 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncpy() function copies count characters of string2 to string1. If
** count is less than or equal to the lenth of string2, a null character ('\0')
** is not appended to the copied string. If count is greater than the lenth of
** string2, the string1 result is padded with null character ('\0') up to
** length count.
*/

#include "libft.h"

char	*ft_strncpy(char *string1, const char *string2, size_t count)
{
	size_t	i;

	i = 0;
	while ((string2[i] != '\0') && (i < count))
	{
		string1[i] = string2[i];
		i++;
	}
	while (i < count)
	{
		string1[i] = '\0';
		i++;
	}
	return (string1);
}
