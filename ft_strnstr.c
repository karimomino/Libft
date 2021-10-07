/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:32:30 by kamin             #+#    #+#             */
/*   Updated: 2021/10/07 17:56:59 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			size;
	int			chara;
	const char	*needle_cpy;

	size = (int) len;
	chara = (int) len;
	needle_cpy = needle;
	while (haystack && size > (int)len - ft_strlen(needle) && chara > 0)
	{
		if (*haystack == *needle_cpy)
		{
			needle_cpy++;
			size--;
		}
		else
		{
			needle_cpy = needle;
			size = len;
		}
		haystack++;
		chara--;
	}
	if (size != (int)len - ft_strlen(needle))
		return (NULL);
	return ((char *)haystack - ft_strlen(needle));
}
