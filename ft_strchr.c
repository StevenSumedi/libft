/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:22:26 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/05 15:56:46 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function strchr() searches for the first occurrence of the character c
** (an unsigned char) in the string pointed to by the argument str.
**
** Return value - This returns a pointer to the first occurrence of the
** character c in the string str, or NULL if the character is not found.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char*)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char*)&str[i]);
	return (NULL);
}
