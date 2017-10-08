/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:59:06 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/06 18:09:58 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument
** by giving its index as first argument to create a "fresh" new string (with
** malloc(3)) resulting from the successive applications of f.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	if (s == NULL || f == NULL)
		return (NULL);
	fresh = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!fresh)
		return (NULL);
	i = -1;
	while (s[++i])
		fresh[i] = f(i, s[i]);
	fresh[i] = '\0';
	return (fresh);
}
