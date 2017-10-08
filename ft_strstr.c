/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 19:56:59 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/05 00:10:30 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strstr() function finds the first occurrence of s2 in s1. The
** terminating '\0' characters are not compared.
**
** Return value - This function returns a pointer to the first occurrence in
** s1 of any of the entire sequence of characters specified in s1, or a null
** pointer if the sequence is not present in s1.
*/

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int		i;
	unsigned int		j;
	size_t				len;

	i = 0;
	len = ft_strlen(s2);
	if (len == 0)
		return ((char*)s1);
	while (s1[i])
	{
		j = 0;
		while (s2[j] == s1[j + i])
		{
			if (j == (len - 1))
				return ((char*)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
