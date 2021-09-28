/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:04:45 by kamin             #+#    #+#             */
/*   Updated: 2021/09/28 16:06:07 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	toupper(int c)
{
	int	retchar;

	retchar = c;
	if (retchar > 64 && retchar < 91)
		retchar += 31;
	return (retchar);
}
