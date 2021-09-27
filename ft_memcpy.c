/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:01:50 by kamin             #+#    #+#             */
/*   Updated: 2021/09/27 20:08:25 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void *restrict source;
	void *restrict destination;

	source = (void *restrict) src;
	destination = dst;

	while (n-- > 0)
	{
		destination = source;
		destination++;
		source++;
	}
	return (dst);
}

int main()
{
	char src[11] = "1234567890";
	char dst[11] = "0987654321";
	char src2[11] = "1234567890";
	char dst2[11] = "0987654321";

	printf("Before Anything:\nDestination: %s\nSource: %s\n", dst, src);	
	printf("-----------------------\nAfter memcpy:\nReturn: %s\nDestination: %s\nSource: %s\n", memcpy(dst, src, 5), dst, src);
	printf("-----------------------\nAfter FT_memcpy:\nReturn: %s\nDestination: %s\nSource: %s\n", ft_memcpy(dst2, src2, 5), dst2, src2);

	return (0);	
}
