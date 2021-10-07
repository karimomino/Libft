/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:59:44 by kamin             #+#    #+#             */
/*   Updated: 2021/10/05 22:43:58 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		size;
	size_t		srcsize;
	size_t		sdst;

	size = ft_strlen(dst);
	srcsize = ft_strlen(src);
	sdst = dstsize;
	if (sdst < size)
		return (sdst + srcsize);
	else if (sdst > size)
	{
		dst += size - 1;
		while (*src != 0 && (sdst-- - size - 1 > 0))
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (size + srcsize);
}
