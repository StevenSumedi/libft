/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:51:22 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/04 23:46:53 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strrchr() function finds the last occurrence of c (converted to a
** character) in string. The ending null character is considered part of the
** string.
**
** The function returns a pointer to the last occurrence of character in str.
** If the character is not found, the function returns a null pointer.
*/

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		length;
	char	value;
	char	*ptr;

	value = (char)c;
	length = ft_strlen(string) - 1;
	ptr = (char*)string;
	if (value == '\0')
		return (ptr + length + 1);
	while (length >= 0)
	{
		if (ptr[length] == value)
			return (ptr + length);
		length--;
	}
	return (NULL);
}
