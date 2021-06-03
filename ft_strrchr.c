/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:41:53 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/01 08:16:41 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*match;
	int		i;

	if (c == 0)
		return ((char *)&s[ft_strlen(s)]);
	match = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			match = (char *)&s[i];
		i++;
	}
	return (match);
}
