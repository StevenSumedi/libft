/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 17:36:14 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/07 21:55:00 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a "fresh" string ending with '\0',
** result of the concatenation of s1 and s2. If the allocation fails the
** function returns NULL.
**
** Return value - The "fresh" string result of the concatenation of the
** 2 strings.
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char*)malloc(sizeof(*str) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	if (s1 && s2)
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	return (str);
}
