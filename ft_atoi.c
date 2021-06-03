/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:33:46 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/01 14:56:26 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	neg = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	if (!ft_isdigit(str[i]) && str[i])
		return (0);
	res = 0;
	while (ft_isdigit(str[i]))
		res = res * 10 + str[i++] - '0';
	if (neg)
		return (-res);
	return (res);
}
