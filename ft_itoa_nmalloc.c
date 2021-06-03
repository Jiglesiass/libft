/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_nmalloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:58:54 by joiglesi          #+#    #+#             */
/*   Updated: 2021/05/31 13:59:18 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_itoa_nmalloc(int n, char str[12])
{
	int		digit_cont;

	digit_cont = ft_numlen(n);
	if (n < 0)
	{
		str[0] = '-';
		str[digit_cont + 1] = '\0';
	}
	else if (n > 0)
		str[digit_cont--] = '\0';
	else
	{
		str[0] = '0';
		str[1] = '\0';
	}
	while (n != 0)
	{
		str[digit_cont--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
}
