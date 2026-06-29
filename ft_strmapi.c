/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drocha-h <drocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:06:00 by drocha-h          #+#    #+#             */
/*   Updated: 2026/06/29 07:20:53 by drocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*st;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	st = (char *)malloc(sizeof(char) * (i + 1));
	if (!st)
		return (NULL);
	i = 0;
	while (s[i])
	{
		st[i] = f(i, s[i]);
		i++;
	}
	st[i] = '\0';
	return (st);
}
