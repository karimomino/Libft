/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:31:24 by kamin             #+#    #+#             */
/*   Updated: 2021/09/27 12:28:20 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	counter;
	unsigned int	tried;

	counter = 0;
	tried = 0;
	while (src[tried] != '\0')
	{
		tried++;
	}
	while (src != NULL && counter < size - 1)
	{
		*dst = *src;
		dst++;
		src++;
		counter++;
	}
	*dst = '\0';
	return (tried);
}
