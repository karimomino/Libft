/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:59:44 by kamin             #+#    #+#             */
/*   Updated: 2021/10/05 15:31:08 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		size;
	int		srcsize;
	long	sdst;

	size = ft_strlen(dst); // 5
	srcsize = ft_strlen(src); // 5
	sdst = dstsize; // 10
	if (sdst < size)
		return (sdst + srcsize);
	else if (sdst > size)
	{
		dst += size;
		while (src != NULL && (sdst-- - size - 1 > 0))
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (size + srcsize);
}
