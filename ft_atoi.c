/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:33:46 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/04 11:46:26 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#include "libft.h"

static int	ft_increment(long long int *res, const char *str, int i, int neg);

int	ft_atoi(const char *str)
{
	long long int	res;
	int				neg;
	int				i;
	int				overflow;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	neg = 0;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg = 1;
	if (!ft_isdigit(str[i]) && str[i])
		return (0);
	res = 0;
	res = str[i++] - '0';
	if (neg)
		res *= (-1);
	while (ft_isdigit(str[i]))
	{
		overflow = ft_increment(&res, str, i++, neg);
		if (overflow == 0 || overflow == -1)
			return (overflow);
	}
	return (res);
}

static int	ft_increment(long long int *res, const char *str, int i, int neg)
{
	if (!neg && *res > *res * 10 + (str[i] - '0'))
		return (-1);
	if (neg && *res < *res * 10 - (str[i] - '0'))
		return (0);
	if (neg)
		*res = *res * 10 - (str[i] - '0');
	else
		*res = *res * 10 + (str[i] - '0');
	return (1);
}

/*int	ft_atoi(const char *str)
{
	long long int	res;
	int				neg;
	int				i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	neg = 0;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg = 1;
	if (!ft_isdigit(str[i]) && str[i])
		return (0);
	res = 0;
	while (ft_isdigit(str[i]))
		res = res * 10 + str[i++] - '0';
	if (neg)
		return (-res);
	return (res);
}*/
