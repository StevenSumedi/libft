/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:08:14 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 17:33:43 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strnstr() function locates the first occurrence of the null-terminated
** string2 in string1, where not more than n characters are searched.
** Characters that appear after a ('\0') character are not searched.
**
** Return values - If s2 is an empty string, s1 is returned; if s2 occurs
** nowhere in s1, NULL is returned; otherwise a pointer to the first character
** of the first occurrence of s2 is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	if (s2[i] == '\0')
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		temp = i;
		while (s1[i] == s2[j] && i < n)
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char*)&s1[temp]);
		}
		i = temp;
		i++;
	}
	return (NULL);
}
