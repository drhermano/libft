/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drocha-h <drocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:38:02 by drocha-h          #+#    #+#             */
/*   Updated: 2026/06/29 07:20:41 by drocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	j = 0;
	dlen = 0;
	slen = ft_strlen(src);
	while (dst[dlen] && dlen < n)
		dlen++;
	if (dlen >= n)
		return (n + slen);
	i = dlen;
	while (src[j] && (i + 1) < n)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dlen + slen);
}
