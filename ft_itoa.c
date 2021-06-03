/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:23:42 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/01 13:04:56 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static char	*ft_case_zero(void)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * 2);
	if (!ptr)
		return (NULL);
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

static char	*ft_itoa_malloc(char *str, int n, int *digit_cont)
{
	if (n < 0)
	{
		str = (char *)malloc(sizeof(char) * (*digit_cont) + 2);
		if (!str)
			return (NULL);
		str[0] = '-';
		str[*digit_cont + 1] = '\0';
	}
	else if (n > 0)
	{
		str = (char *)malloc(sizeof(char) * (*digit_cont) + 1);
		if (!str)
			return (NULL);
		str[*digit_cont] = '\0';
		*digit_cont -= 1;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit_cont;

	if (n == 0)
		return (ft_case_zero());
	digit_cont = ft_numlen(n);
	str = NULL;
	str = ft_itoa_malloc(str, n, &digit_cont);
	if (!str)
		return (NULL);
	while (n != 0)
	{
		str[digit_cont--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (str);
}
