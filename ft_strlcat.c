/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:59:44 by kamin             #+#    #+#             */
/*   Updated: 2021/09/28 15:50:17 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		size;
	int		srcsize;
	long	sdst;

	size = ft_strlen(dst);
	srcsize = ft_strlen(src);
	sdst = dstsize;
	if (sdst < size + 1)
		return (sdst + srcsize);
	else if (sdst > size + 1)
	{
		while (src != NULL && (sdst-- - size - 1 > 0))
		{
			*(dst + size) = *src;
			dst++;
			src++;
		}
		*(dst + size) = '\0';
	}
	return (size + srcsize);
}
