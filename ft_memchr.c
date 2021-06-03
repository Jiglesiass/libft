/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:54:59 by joiglesi          #+#    #+#             */
/*   Updated: 2021/05/31 15:08:11 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	 char	*tr;
	size_t	i;

	tr = (char *)s;
	i = 0;
	while (i < n)
	{
		if (tr[i] == c)
			return ((void *)&tr[i]);
		i++;
	}
	return (NULL);
}
